#ifndef _I2C_H
#define _I2C_H

#include "sys.h"

#include "function1.h"

/* 宏定义 */
#define I2CPORT GPIOB       	//定义使用 GPIOB 组接口
#define I2C1_SCL GPIO_Pin_6		//定义 SCL 使用 GPIOB_Pin_6
#define I2C1_SDA GPIO_Pin_7		//定义 SDA 使用 GPIOB_Pin_7
#define I2C2_SCL GPIO_Pin_10		//定义 SCL 使用 GPIOB_Pin_10
#define I2C2_SDA GPIO_Pin_11		//定义 SDA 使用 GPIOB_Pin_11

#define HostAddress 0xc0	//总线主机的设备地址
#define BusSpeed 200000		//总线速度（不高于400000）


/* drive program */
void I2C_GPIO_Init(void);//i2c接口初始化
void I2C_Configuration(void);//i2c初始化

void I2C1_SAND_BUFFER(u8 SlaveAddr,u8 WriteAddr,u8* pBuffer,u16 NumByteToWrite);//I2C1发送数据串
void I2C1_SAND_BYTE(u8 SlaveAddr,u8 writeAddr,u8 pBuffer);//I2C1发送一个字节
void I2C1_READ_BUFFER(u8 SlaveAddr,u8 readAddr,u8* pBuffer,u16 NumByteToRead);//I2C1读取数据串
u8 I2C1_READ_BYTE(u8 SlaveAddr,u8 readAddr);//I2C1读取一个字节

void I2C2_SAND_BUFFER(u8 SlaveAddr,u8 WriteAddr,u8* pBuffer,u16 NumByteToWrite);//I2C2发送数据串
void I2C2_SAND_BYTE(u8 SlaveAddr,u8 writeAddr,u8 pBuffer);//I2C2发送一个字节
void I2C2_READ_BUFFER(u8 SlaveAddr,u8 readAddr,u8* pBuffer,u16 NumByteToRead);//I2C2读取数据串
u8 I2C2_READ_BYTE(u8 SlaveAddr,u8 readAddr);//I2C2读取一个字节

#endif
