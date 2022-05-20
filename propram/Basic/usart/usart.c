/***********************************************************************************

* Author: 影风远sinkfarli
* Create Date: 2022.4.26
* Presonal Blog: 影风远sinkfarli

* Explain: 
			1. USART drive program

***********************************************************************************/



#include "usart.h"

#if 1
#pragma import(__use_no_semihosting)             
/* 标准库需要的支持函数 */                 
struct __FILE {
	int handle; 
}; 
FILE __stdout;       
/* 定义_sys_exit()以避免使用半主机模式 */    
_sys_exit(int x)
{ 
	x = x; 
} 
/* 重定义fputc函数 */ 
int fputc(int ch, FILE *f)
{      
	while((USART_n->SR&0X40) == 0); //循环发送，直到发送完毕   
    USART_n->DR = (u8) ch;      
	return ch;
}
#endif 



/********************************** USART1 串口相关程序 *********************************/

/**
* Function: 利用#if对 USART1 使用与屏蔽选择 
**/
#if EN_USART1

u8 USART1_RX_BUF[USART1_REC_LEN];	//接收缓冲，最大USART_REC_LEN个字节
u16 USART1_RX_STA = 0;	//接收状态标记

/**
* Function: USART1 专用的 printf 函数
* Notice: 当同时开启2个以上串口时，printf 函数只能用于其中一个USART，其它串口要自创独立的 printf 函数
* 调用方（例）：USART1_printf("123");
**/
void USART1_printf (char *fmt, ...)
{ 
	char buffer[USART1_REC_LEN+1];  //数据长度200+1
	u8 i = 0;	
	va_list arg_ptr;
	va_start(arg_ptr, fmt);  
	vsnprintf(buffer, USART1_REC_LEN+1, fmt, arg_ptr);
	while ((i < USART1_REC_LEN) && (i < strlen(buffer)))
	{
		USART_SendData(USART1, (u8) buffer[i++]);
		while (USART_GetFlagStatus(USART1, USART_FLAG_TC) == RESET); 
	}
	va_end(arg_ptr);
}

/**
* Function: USART1 初始化并启动程序 
* Parameter: 
			1. u32 bound		波特率 
**/
void USART1_Init(u32 bound)
{
	/* 所需结构体变量定义 */
  GPIO_InitTypeDef GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	NVIC_InitTypeDef NVIC_InitStructure;
	
	/* 使能USART1 GPIOA时钟 */
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1|RCC_APB2Periph_GPIOA, ENABLE);
	
  /* USART1_TX GPIO 结构体成员初始化GPIO初始化 */
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;	//设置USART1所在的TX端口是PA9
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;	//复用推挽输出
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	/* USART1_RX GPIO 结构体成员初始化和GPIO初始化 */
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;	//设置USART1所在的RX端口是PA10
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;	//浮空输入
	GPIO_Init(GPIOA, &GPIO_InitStructure); 
	
	
  /* USART1 NVIC 中断配置和NVIC初始化 */
  NVIC_InitStructure.NVIC_IRQChannel = USART1_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 3 ;	//抢占优先级3
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3 ;	//子优先级3
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;		//IRQ通道使能
	NVIC_Init(&NVIC_InitStructure);		//根据指定的参数初始化NVIC寄存器
	
  /* USART1 相关初始化设置 */
	USART_InitStructure.USART_BaudRate = bound;	//波特率设置
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;	//ؖ字长为8位数据格式
	USART_InitStructure.USART_StopBits = USART_StopBits_1;	//一个停止位
	USART_InitStructure.USART_Parity = USART_Parity_No;	//无奇偶校验
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;	//无硬件数据流控制
	USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;	//收发模式
	USART_Init(USART1, &USART_InitStructure);	//初始化USART1端口
	
	/* 开启ENABLE/关闭DISABLE中断 */
	USART_ITConfig(USART1, USART_IT_RXNE, ENABLE);	
	/* 使能USART1串口 */
	USART_Cmd(USART1, ENABLE);	
}

/**
* Function: USART1 端口中断服务程序（固定函数名不能修改）
**/
void USART1_IRQHandler(void)
{
	u8 Res;

	/* 字符串接收USART_RX_BUF[]程序 */
	if(USART_GetITStatus(USART1, USART_IT_RXNE) != RESET)	//接收中断（接收到的数据必须是以0xod,0x0a结尾）
	{
		Res = USART_ReceiveData(USART1);	//读取接收到的数据
		printf("%c",Res);	//把接收到的数据以 a 符号变量发送回电脑
		if((USART1_RX_STA&0x8000) == 0)	//接收未完成
		{	
			if(USART1_RX_STA&0x4000)	//接收到了0x0d
			{		
				if(Res != 0x0a)USART1_RX_STA = 0; //接收错误，重新开始
				else USART1_RX_STA |= 0x8000;	//接收完成
			}
			else	//还没接收到0x0d
			{ 				
				if(Res == 0x0d)USART1_RX_STA |= 0x4000;	
				else
				{
					USART1_RX_BUF[USART1_RX_STA&0X3FFF] = Res;	//将接收到的数据放入数组
					USART1_RX_STA++;	//数据长度计数加1
					if(USART1_RX_STA>(USART1_REC_LEN-1))USART1_RX_STA = 0;	//接收数据错误，重新开始接收
				}		 
			}
		}   		 
	} 
} 

#endif



/********************************** USART2 串口相关程序 *********************************/

/**
* Function: 利用#if对 USART2 使用与屏蔽选择 
**/
#if EN_USART2 

u8 USART2_RX_BUF[USART2_REC_LEN];	//接收缓冲，最大USART_REC_LEN个字节
u16 USART2_RX_STA=0;	//接收完成标志

/**
* Function: USART2 专用的 printf 函数
* Notice: 当同时开启2个以上串口时，printf 函数只能用于其中一个USART，其它串口要自创独立的 printf 函数
* 调用方（例）：USART2_printf("123");
**/
void USART2_printf (char *fmt, ...)
{ 
	char buffer[USART2_REC_LEN+1];	//数据长度200+1
	u8 i = 0;	
	va_list arg_ptr;
	va_start(arg_ptr, fmt);  
	vsnprintf(buffer, USART2_REC_LEN+1, fmt, arg_ptr);
	while ((i < USART2_REC_LEN) && (i < strlen(buffer)))
	{
		USART_SendData(USART2, (u8) buffer[i++]);
		while (USART_GetFlagStatus(USART2, USART_FLAG_TC) == RESET); 
	}
	va_end(arg_ptr);
}

/**
* Function: USART2 初始化并启动程序 
* Parameter: 
			1. u32 bound		波特率 
**/
void USART2_Init(u32 bound)
{
  /* 所需结构体变量定义 */
	GPIO_InitTypeDef GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	NVIC_InitTypeDef NVIC_InitStructure;
		 
	/* 使能USART1 GPIOA时钟 */
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA , ENABLE);
	/* 使能端口的RCC时钟 */
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2, ENABLE); 
	
	/* USART2_TX GPIO 结构体成员初始化GPIO初始化 */
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;	//设置USART2所在的TX端口是PA2
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;	//复用推挽输出
	GPIO_Init(GPIOA, &GPIO_InitStructure);  
	
	/* USART2_RX GPIO 结构体成员初始化GPIO初始化 */
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;	//设置USART2所在的RX端口是PA3
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;	//浮空输入
	GPIO_Init(GPIOA, &GPIO_InitStructure); 
	
	/* USART2 NVIC 中断配置和NVIC初始化 */
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_0);
	NVIC_InitStructure.NVIC_IRQChannel = USART2_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 3 ; //抢占优先级3
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;	//子优先级3
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;	//IRQ通道使能
	NVIC_Init(&NVIC_InitStructure);	//根据指定的参数初始化NVIC寄存器
	

  /* USART2 相关初始化设置 */
	USART_InitStructure.USART_BaudRate = bound;	//波特率设置
	USART_InitStructure.USART_WordLength = USART_WordLength_8b; //字长位8位数据格式
	USART_InitStructure.USART_StopBits = USART_StopBits_1;	//一个停止位
	USART_InitStructure.USART_Parity = USART_Parity_No;	//无奇偶校验
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None; //无硬件数据流控制
	USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;	//收发模式
	USART_Init(USART2, &USART_InitStructure);	//初始化USART2端口
	USART_ITConfig(USART2, USART_IT_RXNE, ENABLE);	//开启ENABLE/关闭DISABLE中断
	USART_Cmd(USART2, ENABLE);	//使能USART2串口

}

/**
* Function: USART1 端口中断服务程序（固定函数名不能修改）
**/
void USART2_IRQHandler(void)
{ 

} 
#endif	



/********************************** USART3 串口相关程序 *********************************/

/**
* Function: 利用#if对 USART3 使用与屏蔽选择 
**/
#if EN_USART3

u8 USART3_RX_BUF[USART3_REC_LEN];	//接收缓冲，最大USART_REC_LEN个字节
u16 USART3_RX_STA=0;	//接收完成标志

/**
* Function: USART3 专用的 printf 函数
* Notice: 当同时开启2个以上串口时，printf 函数只能用于其中一个USART，其它串口要自创独立的 printf 函数
* 调用方（例）：USART3_printf("123");
**/
void USART3_printf (char *fmt, ...)
{ 
	char buffer[USART3_REC_LEN+1];	//数据长度200+1
	u8 i = 0;	
	va_list arg_ptr;
	va_start(arg_ptr, fmt);  
	vsnprintf(buffer, USART3_REC_LEN+1, fmt, arg_ptr);
	while ((i < USART3_REC_LEN) && (i < strlen(buffer)))
	{
		USART_SendData(USART3, (u8) buffer[i++]);
		while (USART_GetFlagStatus(USART3, USART_FLAG_TC) == RESET); 
	}
	va_end(arg_ptr);
}

/**
* Function: USART2 初始化并启动程序 
* Parameter: 
			1. u32 bound		波特率 
**/
void USART3_Init(u32 bound)
{
	/* 所需结构体变量定义 */
	GPIO_InitTypeDef GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	NVIC_InitTypeDef NVIC_InitStructure; 

	/* 使能USART1 GPIOA时钟 */
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB , ENABLE);
	/* 使能端口的RCC时钟 */
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART3, ENABLE); 
	
	/* USART3_TX GPIO 结构体成员初始化GPIO初始化 */
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;	//设置USART3所在的TX端口是PB10
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;	//复用推挽输出
	GPIO_Init(GPIOB, &GPIO_InitStructure);
	
	/* USART3_TX GPIO 结构体成员初始化GPIO初始化 */
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;	//设置USART3所在的RX端口是PB11
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING; //浮空输入
	GPIO_Init(GPIOB, &GPIO_InitStructure);

	/* USART2 NVIC 中断配置和NVIC初始化 */
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_0);
	NVIC_InitStructure.NVIC_IRQChannel = USART3_IRQn; //抢占优先级3
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0; //子优先级3
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;	//IRQ通道使能
	NVIC_Init(&NVIC_InitStructure); 	//根据指定的参数初始化NVIC寄存器

	 /* USART3 相关初始化设置 */
	USART_InitStructure.USART_BaudRate = BaudRate;	//波特率设置
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;	//字长位8位数据格式
	USART_InitStructure.USART_StopBits = USART_StopBits_1;	//一个停止位
	USART_InitStructure.USART_Parity = USART_Parity_No;	//无奇偶校验
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;	//无硬件数据流控制
	USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;	//收发模式
	USART_Init(USART3, &USART_InitStructure);	//初始化USART3端口
	USART_ITConfig(USART3, USART_IT_RXNE, ENABLE);	//开启ENABLE/关闭DISABLE中断
	USART_Cmd(USART3, ENABLE);	//使能USART1串口


}

/**
* Function: USART3 端口中断服务程序（固定函数名不能修改）
**/
void USART3_IRQHandler(void)
{ 	

} 
#endif	
