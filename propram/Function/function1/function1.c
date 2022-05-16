/***********************************************************************************

* Author: 影风远sinkfarli
* Create Date: 2022.4.28
* Presonal Blog: 影风远sinkfarli

* Explain:
			1. 实现 usart 串口通信
			2. 实现 OLED 屏幕信息与 usart 电脑端的信息同步

***********************************************************************************/


#include "function1.h"



/**
*	Function: 测试程序
* 
*/
void Text(void)
{
	GPIO_WriteBit(LEDPORT,LED1,(BitAction)(1)); //LED1接口输出高电平1
	delay_us(50000); //延时1秒
	GPIO_WriteBit(LEDPORT,LED1,(BitAction)(0)); //LED1接口输出低电平0
	delay_us(100000); //延时1秒	
		GPIO_WriteBit(LEDPORT,LED1,(BitAction)(1)); //LED1接口输出高电平1
	delay_us(50000); //延时1秒
	GPIO_WriteBit(LEDPORT,LED1,(BitAction)(0)); //LED1接口输出低电平0
	delay_us(100000); //延时1秒	
}




/**
*	Function: usat 电脑端的主程序控制程序
* 
*/
void FT1_UARETandOLED(void)
{
	/* 判断标志位是否为0xC000，与上0为最后一位1，表示真，可以处理 */
	if(USART1_RX_STA&0xC000)
	{
		/* 单独按回车再显示 */
		if((USART1_RX_STA&0x3FFF) == 0)
		{
			printf("                                 \r\n");			
			printf(" 请输入以下指令，并回车进行操作：\r\n");
			printf(" ff-前进  bb-后退  ss-停止       \r\n");
			printf(" sf-停止前进  sb-停止后退        \r\n");

		}
		
		/* 执行前进指令程序（forword） */
		else if((USART1_RX_STA&0x3FFF) == 2 && USART1_RX_BUF[0]=='f' && USART1_RX_BUF[1]=='f')
		{
			GPIO_SetBits(LEDPORT,LED1);
			printf("前进 \r\n");
			FT1_OLED_CmmandFF();
		}
		
		/* 执行停止前进指令程序（stop forword） */
		else if((USART1_RX_STA&0x3FFF) == 2 && USART1_RX_BUF[0]=='s'&& USART1_RX_BUF[1]=='f')
		{
			GPIO_ResetBits(LEDPORT,LED1);
			printf("停止前进 \r\n");
			FT1_OLED_CmmandSF();
		}	
		
		/* 执行后退指令程序（brackword） */
		else if((USART1_RX_STA&0x3FFF) == 2 && USART1_RX_BUF[0]=='b' && USART1_RX_BUF[1]=='b')
		{
			GPIO_SetBits(LEDPORT,LED2);
			printf("后退 \r\n");
			FT1_OLED_CmmandBB();
		}
		
		/* 执行停止后退指令程序（stop brackword） */
		else if((USART1_RX_STA&0x3FFF) == 2 && USART1_RX_BUF[0]=='s' && USART1_RX_BUF[1]=='b')
		{
			GPIO_ResetBits(LEDPORT,LED2);
			printf("停止后退 \r\n");
			FT1_OLED_CmmandSB();
		}		
		
		/* 执行停止所有指令程序（stop all） */
		else if((USART1_RX_STA&0x3FFF) == 2 && USART1_RX_BUF[0]=='s' && USART1_RX_BUF[1]=='s')
		{
			GPIO_ResetBits(LEDPORT,LED1);
			GPIO_ResetBits(LEDPORT,LED2);
			printf("停止 \r\n");
			FT1_OLED_CmmandSS();
		}
	
		else
		{
			printf("指令错误，请重新输入 \r\n");
		}
		USART1_RX_STA=0;
	}
}



/**
*	Function: OLED 系统启动界面程序
*/
void FT1_OLED_MianStart(void)
{
	OLED_Display_8x16_Buffer(2,"  Shadow knife");
	OLED_Display_8x16_Buffer(4,"     system");	
	delay_s(3);
	OLED_Display_clear();
}



/**
*	Function: 执行前进指令程序（forword）
*/
void FT1_OLED_CmmandFF(void)
{
	OLED_Display_8x16_Buffer(0,"Input Command:");
	OLED_Display_8x16_Buffer(2,"   forword...");	
	OLED_Display_8x16_Buffer(4,"Perform the end!");
	delay_s(3);
	OLED_Display_clear();	
}


/**
*	Function: 执行停止前进指令程序（stop forwork）
*/
void FT1_OLED_CmmandSF(void)
{
	OLED_Display_8x16_Buffer(0,"Input Command:");
	OLED_Display_8x16_Buffer(2,"stop forword...");	
	OLED_Display_8x16_Buffer(4,"Perform the end!");	
	delay_s(3);
	OLED_Display_clear();	
}



/**
*	Function: 执行后退指令程序（backword）
*/
void FT1_OLED_CmmandBB(void)
{
	OLED_Display_8x16_Buffer(0,"Input Command:");
	OLED_Display_8x16_Buffer(2,"   backword...");	
	OLED_Display_8x16_Buffer(4,"Perform the end!");		
	delay_s(3);
	OLED_Display_clear();
}



/**
*	Function: 执行停止后退指令程序（stop backwork）
*/
void FT1_OLED_CmmandSB(void)
{
	OLED_Display_8x16_Buffer(0,"Input Command:");
	OLED_Display_8x16_Buffer(2,"stop backwork...");	
	OLED_Display_8x16_Buffer(4,"Perform the end!");
	delay_s(3);
	OLED_Display_clear();	
}



/**
*	Function: 执行停止所有指令程序（all stop）
*/
void FT1_OLED_CmmandSS(void)
{
	OLED_Display_8x16_Buffer(0,"Input Command:");
	OLED_Display_8x16_Buffer(2,"   all stop...");	
	OLED_Display_8x16_Buffer(4,"Perform the end!");	
	delay_s(3);
	OLED_Display_clear();	
}

