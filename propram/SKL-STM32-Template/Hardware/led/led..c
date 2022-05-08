/***********************************************************************************

* Author: 影风远sinkfarli
* Create Date: 2022.4.23
* Presonal Blog: 影风远sinkfarli

* Explain: LED drive program

***********************************************************************************/

#include "led.h"

/**
* Function: 对 LED 端口进行初始化
**/
void LED_Init(void)
{
	/* 定义新的GPIO结构体变量 */
	GPIO_InitTypeDef GPIO_InitStructure;
	
	/* 启动相关的GPIO端口 */
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOB|RCC_APB2Periph_GPIOC,ENABLE);// 在时钟层面上启动相关的GPIO端口，端口必须在时钟上启动才能使用端口！

	/* 对结构体的参数定义 */
	GPIO_InitStructure.GPIO_Pin = LED1 | LED2;// 选择端口
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;// 设置IO端口的工作方式
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;// 设置IO端口速度
	
	/* 运行GPIO初始化程序 */
	GPIO_Init(LEDPORT, &GPIO_InitStructure);
}
