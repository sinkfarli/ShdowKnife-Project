/*********************************************************************************************

* Author: 影风远sinkfarli
* Create Date: 2022.4.23
* Presonal Blog: 影风远sinkfarli

* Explain: 
			1. Delay drive program.
			2. Unit: 1s = 1000ms = 1000000us; 1ms = 1000us。

*********************************************************************************************/

#include "delay.h"

/**
* Function: us微秒级延时程序
* Notice: 参考值即延时数，72MHz时最大值233015。
* EXplain: 
			1. 利用寄存器操作方法编写（效率高）。
			2. 利用系统时基定时器（嘀嗒定时器，工作原理：相当于递减计数器）。
			3. 延时时间非常精准。
**/
void delay_us(u32 us)
{
	SysTick->LOAD = AHB_INPUT*us;	//重装计数初值（当主频是72MHz，72次为1微妙）
	SysTick->VAL = 0x00; //清空定时的计数器
	SysTick->CTRL = 0x00000005; //时钟源HCLK，打开定时器
	while(!(SysTick->CTRL&0x000100000)); //等待计数到0
	SysTick->CTRL = 0x00000004; //关闭定时器
}

/**
* Function: ms毫秒级延时程序
* Notice: 参考值即延时数，最大值65535。
**/
void delay_ms(u16 ms)
{
	while(ms-- != 0)
	{
		delay_us(1000);
	}
}

/**
* Function: s秒级延时函数
* Notice: 参考值即延时数，最大值65535。
**/
void delay_s(u16 s)
{
	while(s-- != 0)
	{
		delay_ms(1000);
	}
}
