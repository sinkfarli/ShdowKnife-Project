#ifndef _SERVO_PCA9685_H
#define _SERVO_PCA9685_H

#include "sys.h"
#include "i2c.h"
#include "delay.h"
#include "led.h"

#include "function1.h"


/* 宏定义 */
#define PCA9685_ADDR	0x80		//I2C总线地址
#define PCA9685_SUBADR1 0x02	//I2C总线子地址1
#define PCA9685_SUBADR2 0x03	//I2C总线子地址2
#define PCA9685_SUBADR3 0x04	//I2C总线子地址3

#define PCA9685_MODE1 0x00		//模式寄存器1
#define PCA9685_PRESCALE 0xFE	//用于PWM输出频率的预调节器

#define LED0_ON_L 0x06				//LED0输出和亮度控制字节0
#define LED0_ON_H 0x07				//LED0输出和亮度控制字节1
#define LED0_OFF_L 0x08				//LED0输出和亮度控制字节2
#define LED0_OFF_H 0x09				//LED0输出和亮度控制字节3

#define ALLLED_ON_L 0xFA			//加载所有的LEDn_ON寄存器，字节为0
#define ALLLED_ON_H 0xFB			//加载所有的LEDn_ON寄存器，字节为1
#define ALLLED_OFF_L 0xFC			//加载所有的LEDn_OFF寄存器，字节为0
#define ALLLED_OFF_H 0xFD			//加载所有的LEDn_OFF寄存器，字节为1


/* 驱动函数的封装 */
void PCA9685_Init(void);//舵机初始化
void PCA9685_Reset(void);//pca9685 计数器清零
void setPWMFreq(float freq);//设置PWM频率
void setPWM(u8 num, u16 on, u16 off);//写入PWM

#endif
