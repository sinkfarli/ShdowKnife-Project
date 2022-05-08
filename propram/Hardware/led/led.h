#ifndef _LED_H
#define _LED_H
#include "sys.h"

/* LED IO口宏定义 */
#define LEDPORT GPIOB // 定义 LED 总端口使用 GPIOB 组端口
#define LED1 GPIO_Pin_0 // 定义 LED1 使用 GPIOB 组接口的 Pin_0 号端口
#define LED2 GPIO_Pin_1 // 定义 LED2 使用 GPIOB 组接口的 Pin_1 号端口

/* 封装函数声明 */
void LED_Init(void);// LED 各端口的初始化

#endif
