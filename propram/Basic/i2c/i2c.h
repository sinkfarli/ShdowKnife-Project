#ifndef _I2C_H
#define _I2C_H

#include "sys.h"

/* 宏定义 */
#define I2CPORT GPIOB       	//定义使用 GPIOB 组接口
#define I2C_SCL GPIO_Pin_6		//定义 SCL 使用 GPIOB_Pin_6
#define I2C_SDA GPIO_Pin_7		//定义 SDA 使用 GPIOB_Pin_7

#define HostAddress 0xc0	//总线主机的设备地址
#define BusSpeed 200000		//总线速度（不高于400000）


/* drive program */


#endif
