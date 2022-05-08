#ifndef _KEY_H
#define _KEY_H
#include "sys.h"

/* 宏定义 */
#define KEYPORT GPIOA	//定义IO端口A组
#define KEY1 GPIO_Pin_0	//KEY1使用第 0 号端口
#define KEY2 GPIO_Pin_1	//KEY2使用第 1 号端口

/* 封装函数声明 */
void KEY_Init(void);	//开关的初始化程序

#endif
