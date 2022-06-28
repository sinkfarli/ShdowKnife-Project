#include "stm32f10x.h"
//#include "function1.h"
#include "function2.h"

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
	PCA9685_Init();



	
	/* 变量声明部分 */
	USART1_RX_STA = 0xC000; 

	
	/* 系统启动准备界面 */
	FT1_OLED_MianStart();
	
//	setPWMFreq(50);//设置PWM频率       
//	/* 提出问题：USART串口通信卡死，软件层面：i2c通信代码可以执行，硬件层面：mobe指示灯未显示报错 
//	问题猜想：setPWMFreq函数影响到usart中断服务程序；
//						未执行FT1_UARETandOLED()函数，即if(USART1_RX_STA&0xC000)标志判断未失败；
//	
//	*/



	while(1)
	{
	setPWM(4,0,2048);
	delay_s(10);
		FT1_UARETandOLED();
		
	}
	
}
