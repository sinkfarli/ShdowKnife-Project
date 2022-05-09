/***********************************************************************************

* Author: 影风远sinkfarli
* Create Date: 2022.4.28
* Presonal Blog: 影风远sinkfarli

* Explain:

***********************************************************************************/


#include "function1.h"


/**
*	Function:
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
		else if((USART1_RX_STA&0x3FFF) == 2 && USART1_RX_BUF[0]=='f' && USART1_RX_BUF[1]=='f')
		{
			GPIO_SetBits(LEDPORT,LED1);
			printf("前进 \r\n");
		}
		else if((USART1_RX_STA&0x3FFF) == 2 && USART1_RX_BUF[0]=='b' && USART1_RX_BUF[1]=='b')
		{
			GPIO_SetBits(LEDPORT,LED2);
			printf("后退 \r\n");
		}
		else if((USART1_RX_STA&0x3FFF) == 2 && USART1_RX_BUF[0]=='s' && USART1_RX_BUF[1]=='s')
		{
			GPIO_ResetBits(LEDPORT,LED1);
			GPIO_ResetBits(LEDPORT,LED2);
			printf("停止 \r\n");
		}
		else if((USART1_RX_STA&0x3FFF) == 2 && USART1_RX_BUF[0]=='s'&& USART1_RX_BUF[1]=='f')
		{
			GPIO_ResetBits(LEDPORT,LED1);
			printf("停止前进 \r\n");
		}
		else if((USART1_RX_STA&0x3FFF) == 2 && USART1_RX_BUF[0]=='s' && USART1_RX_BUF[1]=='b')
		{
			GPIO_ResetBits(LEDPORT,LED2);
			printf("停止后退 \r\n");
		}
		else
		{
			printf("指令错误，请重新输入 \r\n");
		}
		USART1_RX_STA=0;
	}
}

