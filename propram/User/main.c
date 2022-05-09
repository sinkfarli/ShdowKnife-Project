#include "stm32f10x.h"
#include "function1.h"
#include "led.h"
#include "usart.h"

int main (void)
{
	
	
	/* 初始部分 */
	RCC_Configuration();
	LED_Init();
	USART1_Init(115200); //usart串口初始化
	
	USART1_RX_STA = 0xC000; 
	
	
	while(1)
	{

		FT1_UARETandOLED();
		
	}
	
}
