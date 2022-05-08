/***********************************************************************************

* Author: 影风远sinkfarli
* Create Date: 2022.4.24
* Presonal Blog: 影风远sinkfarli

* Explain: key drive program

***********************************************************************************/

#include "key.h"

/**
*	Function: 开关的初始化程序
**/
void KEY_Init(void)
{
	/* 定义新的GPIO结构体变量 */
	GPIO_InitTypeDef GPIO_InitStructure;
	
	/* 启动相应的GPIO端口 */
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	
	/* 对结构体的参数定义 */
	GPIO_InitStructure.GPIO_Pin = KEY1 | KEY2;// 选择端口
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;// 设置IO端口的工作方式
	//GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;// 设置IO端口速度
	
	/* 运行GPIO初始化程序 */
	GPIO_Init(KEYPORT, &GPIO_InitStructure);	
}
