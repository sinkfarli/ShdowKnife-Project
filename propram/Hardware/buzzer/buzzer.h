#ifndef _BUZZER_H
#define _BUZZER_H
#include "sys.h"
#include "delay.h"

/* 宏定义 */
#define BUZZERPORT GPIOB	//定义 BUZZER 总端口使用 GPIOB 组端口
#define BUZZER GPIO_Pin_5	//定义 BUZZER 使用第 5 号端口

/* statement buzzer drive program */
void BUZZER_Init(void);	//蜂鸣器的初始化程序

/* statement buzzer apply program */
void BUZZER_Beep(void);	//蜂鸣器响一声程序

#endif
