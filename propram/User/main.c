#include "stm32f10x.h"
//#include "function1.h"

#include "sys.h"
#include "led.h"
#include "usart.h"
#include "oled_ssd1306.h"
#include "delay.h"


int main (void)
{	
	/* 初始部分 */
	RCC_Configuration();
	LED_Init();
	USART1_Init(115200); //usart串口初始化
	I2C_Configuration();//i2c初始	
	OLEDSSD1306_Init();//OLED初始化	
	OLED_Display_luminance(255);//OLED亮度设置（0~255）

	/* 变量声明部分 */
	USART1_RX_STA = 0xC000; 

	
	FT1_OLED_MianStart();
	
	
	
	while(1)
	{
		
		FT1_UARETandOLED();
		
	}
	
}
