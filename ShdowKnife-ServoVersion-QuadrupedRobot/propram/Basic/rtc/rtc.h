#ifndef _RTC_H
#define _RTC_H

#include "sys.h"

/* 宏定义 */
/**
* Explain:
		1. 由于 stm32 RTC 是 stm32 内部的功能，所以不需要宏定义相关的GPIO端口
**/

/* 全局变量的声明 */
/** 用于RTC时间的读取 **/
extern u8 rmon,rday,rhour,rmin,rsec,rweek;
extern u16 ryear;

/* RTC drive progam statement */
void RTC_First_Config(void);
void RTC_Config(void);

/* RTC 日历 apply progam */
u8 Is_Leap_Year(u16 year);                  
u8 RTC_Get(void);
u8 RTC_Set(u16 syear,u8 smon,u8 sday,u8 hour,u8 min,u8 sec);
u8 RTC_Get_Week(u16 year,u8 month,u8 day);

#endif
