/*********************************************************************************************

* Author: 影风远sinkfarli
* Create Date: 2022.4.22
* Presonal Blog: 影风远sinkfarli

* Explain: RCC drive program

*********************************************************************************************/


#include "sys.h"


/**
* Function: 嵌套中断向量控制器的设置
**/
void NVIC_Configuration(void)
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
}


/**
* Function: RCC时钟的设置
* Explain:
			1. 是对单片机内部的各种时钟进行选择和频率设置
**/
void RCC_Configuration(void)
{  
	ErrorStatus HSEStartUpStatus;   
	RCC_DeInit();              // RCC system reset(for debug purpose) RCC寄存器恢复初始化值   
	RCC_HSEConfig(RCC_HSE_ON); // Enable HSE 使能外部高速晶振
	HSEStartUpStatus = RCC_WaitForHSEStartUp(); // Wait till HSE is ready 等待外部告诉晶振使能完成
	if(HSEStartUpStatus == SUCCESS)
	{   
		/* 设置PLL时钟源及倍频系数*/   
		RCC_PLLConfig(RCC_PLLSource_HSE_Div1, RCC_PLLMul_9); //RCC_PLLMul_x （枚举2~16）是倍频值 
		/* 设置AHB时钟(HCLK) */   
		RCC_HCLKConfig(RCC_SYSCLK_Div1); //RCC_SYSCLK_Div1——AHB时钟 = 系统时钟（SYSCLK）=72MHZ（外部晶振8MHZ） 
		/* 注意此处的设置，如果使用SYSTICK做延时程序，此时SYSTICK(Cortex System timer)=HCLK/8=9MHZ */   
		RCC_PCLK1Config(RCC_HCLK_Div2); // 设置低速AHB时钟(PCLK1),RCC_HCLK_Div2——APB1时钟ד = HCLK/2 = 36MHZ（外部晶振8MHZ）
		RCC_PCLK2Config(RCC_HCLK_Div1); //ʨ׃ٟ̙AHBʱדèPCLK2é,RCC_HCLK_Div1jjAPB2ʱד = HCLK = 72MHZè΢ҿާֱ8HMZé   
		/* 注：AHB主要负责外部存储时钟。APB2负责AD，I/O，高级TIM，串口1。APB1负责DA，USB，SPI，CAN，串口2，3，4，5，普通TIM */  
		FLASH_SetLatency(FLASH_Latency_2); // 设置FLASH存储器延时时钟周期数     
		FLASH_PrefetchBufferCmd(FLASH_PrefetchBuffer_Enable); // 选择FLASH预取☞缓冲的模式，预取指缓存使能 
		RCC_PLLCmd(ENABLE);	// 使能PLL
		while(RCC_GetFlagStatus(RCC_FLAG_PLLRDY) == RESET); // 等待PLL输出稳定
		RCC_SYSCLKConfig(RCC_SYSCLKSource_PLLCLK); // 选择SYSCLK时钟源
		while(RCC_GetSYSCLKSource() != 0x08); // 等待PLL成为SYSCLK时钟源，进入稳定状态
	}  
	
	
	/* 开始使能程序中需要使用的外部时钟 */   
	/* 为什么屏蔽？ 因为把各个功能的开启程序放入到每一个功能放入初始函数当中。这样设计的好处：就是在不使用相关功能的时候，
	就不会加载相关功能的时候就不会加载相关功能的 .c 文件，也就不开起相关功能的RCC时钟设置，这样就不需要加载了各种程序文件之后，
  在同一在这里进行 RCC 设置，而只需要加入或删除对应的功能 .c 文件，就能直接对相关功能进行 RCC 设置	*/
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1 | RCC_APB2Periph_GPIOA | RCC_APB2Periph_GPIOB |   
//	RCC_APB2Periph_GPIOC | RCC_APB2Periph_GPIOD | RCC_APB2Periph_GPIOE, ENABLE); // APB2外设时钟使能  
//	RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2, ENABLE); //APB1外设时钟使能   
//	RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART3, ENABLE);   
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SPI1, ENABLE);   	 
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);    
}
