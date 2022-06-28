/***********************************************************************************

* Author: 影风远sinkfarli
* Create Date: 2022.4.24
* Presonal Blog: 影风远sinkfarli

* Explain: 
			1. Buzzer drive program
			2. Buzzer apply program

***********************************************************************************/

#include "buzzer.h"

/****************************** Buzzer drive program ******************************/

/**
*	Function: 蜂鸣器的初始化程序
**/
void BUZZER_Init(void)
{
	/* 定义新的GPIO结构体变量*/
	GPIO_InitTypeDef GPIO_InitStructure;
	
	/* 对结构体参数定义 */
	GPIO_InitStructure.GPIO_Pin = BUZZER;// 选择端口
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;// 设置IO端口的工作方式
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;// 设置IO端口速度	
	
	/* 运行GPIO初始化程序 */
	GPIO_Init(BUZZERPORT, &GPIO_InitStructure);	
	
	/* 保护蜂鸣器 */
	GPIO_WriteBit(BUZZERPORT,BUZZER,(BitAction)(1));	//使蜂鸣器端口输出高电平
}



/****************************** Buzzer apply program ******************************/

/**
* Function: 蜂鸣器响一声程序
**/
void BUZZER_Beep(void)
{
	u16 i;
	for(i=0;i<200;i++)
	{
		GPIO_WriteBit(BUZZERPORT,BUZZER,(BitAction)(0));
		delay_us(500);
		GPIO_WriteBit(BUZZERPORT,BUZZER,(BitAction)(1));
		delay_us(500);
	}
}
