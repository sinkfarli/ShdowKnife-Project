#ifndef _DELAY_H
#define _DELAY_H
#include "sys.h"

/* 宏定义 */
#define AHB_INPUT 72 // 请按 RCC 中设置的 AHB 时钟频率进行宏定义（unit: MHz）

/* 封装函数声明 */
void delay_us(u32 us);	//微秒级延时
void delay_ms(u16 ms);	//毫秒级延时
void delay_s(u16 s);		//秒级延时

#endif
