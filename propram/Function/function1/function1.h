#ifndef _FUNCTION1_H
#define _FUNCTION_H

#include "stm32f10x.h"
#include "sys.h"
#include "led.h"
#include "delay.h"
#include "usart.h"
#include "oled_ssd1306.h"

/* 函数封装 */
void Text(void);//测试程序


/* 界面程序 */
void FT1_UARETandOLED(void);//
void FT1_OLED_MianStart(void);//OLED 系统启动界面程序
void FT1_OLED_CmmandFF(void);//执行前进指令程序（forword）
void FT1_OLED_CmmandBB(void);//执行后退指令程序（brackword）
void FT1_OLED_CmmandSS(void);//执行停止所有指令程序（stop all）
void FT1_OLED_CmmandSF(void);//执行前进指令程序（stop forword）
void FT1_OLED_CmmandSB(void);//执行前进指令程序（stop brackword）

#endif
