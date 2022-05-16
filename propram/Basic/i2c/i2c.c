/***********************************************************************************

* Author: 影风远sinkfarli
* Create Date: 2022.5.11
* Presonal Blog: 影风远sinkfarli

* Explain:
			1. i2c drive program

***********************************************************************************/



#include "i2c.h"



/**
*	Function：i2c接口初始化
**/
void I2C_GPIO_Init(void)
{
	GPIO_InitTypeDef  GPIO_InitStructure; 	
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOB|RCC_APB2Periph_GPIOC,ENABLE);       
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_I2C1 | RCC_APB1Periph_I2C2, ENABLE);	//启动I2C功能 
	
	/* i2c1 接口初始化 */ 
	GPIO_InitStructure.GPIO_Pin = I2C1_SCL | I2C1_SDA;                      
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_OD;      
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;    
	GPIO_Init(I2CPORT, &GPIO_InitStructure);
	
	/* i2c2 接口初始化*/
	GPIO_InitStructure.GPIO_Pin = I2C2_SCL | I2C2_SDA;                      
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_OD;      
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;    
	GPIO_Init(I2CPORT, &GPIO_InitStructure);
}



/**
*	Function：i2c初始化
**/
void I2C_Configuration(void)
{
	/* 定义新的i2c结构体 */
	I2C_InitTypeDef  I2C_InitStructure;
	
	I2C_GPIO_Init(); //i2c接口初始化
	
	/* i2c1 结构体成员定义和初始化i2c */
	I2C_InitStructure.I2C_Mode = I2C_Mode_I2C;	//设置 I2C 为 I2C 模式
	I2C_InitStructure.I2C_DutyCycle = I2C_DutyCycle_2; //I2C 快速模式 Tlow / Thigh = 2
	I2C_InitStructure.I2C_OwnAddress1 = HostAddress; 	//主机地址（从机不得用此地址）
	I2C_InitStructure.I2C_Ack = I2C_Ack_Enable;	//允许应答
	I2C_InitStructure.I2C_AcknowledgedAddress = I2C_AcknowledgedAddress_7bit; //7位地址模式
	I2C_InitStructure.I2C_ClockSpeed = BusSpeed; //总线速度设置 	
	I2C_Init(I2C1,&I2C_InitStructure);
	I2C_Cmd(I2C1,ENABLE);		
	
	/* i2c2 结构体成员定义、初始化i2c和开启*/
	I2C_InitStructure.I2C_Mode = I2C_Mode_I2C;	//设置 I2C 为 I2C 模式
	I2C_InitStructure.I2C_DutyCycle = I2C_DutyCycle_2; //I2C 快速模式 Tlow / Thigh = 2
	I2C_InitStructure.I2C_OwnAddress1 = HostAddress; 	//主机地址（从机不得用此地址）
	I2C_InitStructure.I2C_Ack = I2C_Ack_Enable;	//允许应答
	I2C_InitStructure.I2C_AcknowledgedAddress = I2C_AcknowledgedAddress_7bit; //7位地址模式
	I2C_InitStructure.I2C_ClockSpeed = BusSpeed; //总线速度设置 	
	I2C_Init(I2C2,&I2C_InitStructure);	
	I2C_Cmd(I2C2,ENABLE);	
}



/**************************** I2C1 Module drive program********************************/

/**
* Function：I2C1发送数据串
* Parameter:
				1. SlaveAddr       	发送的器件地址
				2. WriteAddr       	器件的内部寄存器
				3. pBuffer         	发送数据内容
				4. NumByteToWrite		多少组数据
**/
void I2C1_SAND_BUFFER(u8 SlaveAddr,u8 WriteAddr,u8* pBuffer,u16 NumByteToWrite)
{
	/* 产生起始位 */
	I2C_GenerateSTART(I2C1,ENABLE);
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_MODE_SELECT)); //等待完成	
	
	I2C_Send7bitAddress(I2C1,SlaveAddr,I2C_Direction_Transmitter);//发送器件地址
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED));//等待完成
	
	I2C_SendData(I2C1,WriteAddr); //内部功能地址
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_BYTE_TRANSMITTED));//等待完成
	
	while(NumByteToWrite--){ //循环发送数据	
		I2C_SendData(I2C1,*pBuffer); //发送数据
		pBuffer++; //数据指针移位
		while (!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_BYTE_TRANSMITTED));//等待完成
	}
	
	/* 产生停止信号 */
	I2C_GenerateSTOP(I2C1,ENABLE);
}



/**
* Function：I2C1发送一个字节
* Parameter：
				1. SlaveAddr       	发送的器件地址
				2. WriteAddr       	器件的内部寄存器
				3. pBuffer         	发送数据内容
**/
void I2C1_SAND_BYTE(u8 SlaveAddr,u8 writeAddr,u8 pBuffer)
{
	/* 产生起始位 */
	I2C_GenerateSTART(I2C1,ENABLE);
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_MODE_SELECT)); //等待完成
	
	I2C_Send7bitAddress(I2C1,SlaveAddr, I2C_Direction_Transmitter); //发送从器件地址及状态（写入）
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED)); //等待完成	
	
	I2C_SendData(I2C1,writeAddr); //发送从器件内部寄存器地址
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_BYTE_TRANSMITTED)); //等待完成	
	
	I2C_SendData(I2C1,pBuffer); //发送要写入的内容
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_BYTE_TRANSMITTED)); //等待完成

	/* 产生停止信号 */
	I2C_GenerateSTOP(I2C1,ENABLE);
}



/**
* Function：I2C1读取数据串
* Parameter：
				1. SlaveAddr       	发送的器件地址
				2. readAddr       	器件的内部寄存器
				3. pBuffer         	发送数据内容
				4. NumByteToWrite		多少组数据
**/
void I2C1_READ_BUFFER(u8 SlaveAddr,u8 readAddr,u8* pBuffer,u16 NumByteToRead)
{
	while(I2C_GetFlagStatus(I2C1,I2C_FLAG_BUSY));
	
	I2C_GenerateSTART(I2C1,ENABLE);//开启信号
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_MODE_SELECT));	//清除 EV5
	
	I2C_Send7bitAddress(I2C1,SlaveAddr, I2C_Direction_Transmitter); //写入器件地址
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED));//清除 EV6
	
	I2C_Cmd(I2C1,ENABLE);
	
	I2C_SendData(I2C1,readAddr); //发送读的地址
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_BYTE_TRANSMITTED)); //清除 EV8
	
	I2C_GenerateSTART(I2C1,ENABLE); //开启信号
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_MODE_SELECT)); //清除 EV5
	
	I2C_Send7bitAddress(I2C1,SlaveAddr,I2C_Direction_Receiver); //将器件地址传出，主机为读
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_RECEIVER_MODE_SELECTED)); //清除EV6
	
	while(NumByteToRead){
		if(NumByteToRead == 1){ //只剩下最后一个数据时进入 if 语句
			I2C_AcknowledgeConfig(I2C1,DISABLE); //最后有一个数据时关闭应答位
			I2C_GenerateSTOP(I2C1,ENABLE);	//最后一个数据时使能停止位
		}
		if(I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_BYTE_RECEIVED)){ //读取数据
			*pBuffer = I2C_ReceiveData(I2C1);//调用库函数将数据取出到 pBuffer
			pBuffer++; //指针移位
			NumByteToRead--; //字节数减 1 
		}
	}
	
	I2C_AcknowledgeConfig(I2C1,ENABLE);
}



/**
* Function：I2C1读取一个字节
* Parameter：
				1. SlaveAddr       	发送的器件地址
				2. readAddr       	器件的内部寄存器

**/
u8 I2C1_READ_BYTE(u8 SlaveAddr,u8 readAddr)
{ 
	u8 a;
	
	while(I2C_GetFlagStatus(I2C1,I2C_FLAG_BUSY));
	
	I2C_GenerateSTART(I2C1,ENABLE);
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_MODE_SELECT));
	
	I2C_Send7bitAddress(I2C1,SlaveAddr, I2C_Direction_Transmitter); 
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED));
	
	I2C_Cmd(I2C1,ENABLE);
	
	I2C_SendData(I2C1,readAddr);
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_BYTE_TRANSMITTED));
	
	I2C_GenerateSTART(I2C1,ENABLE);
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_MODE_SELECT));
	
	I2C_Send7bitAddress(I2C1,SlaveAddr, I2C_Direction_Receiver);
	while(!I2C_CheckEvent(I2C1,I2C_EVENT_MASTER_RECEIVER_MODE_SELECTED));
	
	I2C_AcknowledgeConfig(I2C1,DISABLE); //最后有一个数据时关闭应答位
	
	I2C_GenerateSTOP(I2C1,ENABLE);	//最后一个数据时使能停止位
	
	a = I2C_ReceiveData(I2C1);
	return a;
}



/**************************** I2C2 Module drive program********************************/

/**
* Function：I2C2发送数据串
* Parameter:
				1. SlaveAddr       	发送的器件地址
				2. WriteAddr       	器件的内部寄存器
				3. pBuffer         	发送数据内容
				4. NumByteToWrite		多少组数据
**/
void I2C2_SAND_BUFFER(u8 SlaveAddr,u8 WriteAddr,u8* pBuffer,u16 NumByteToWrite)
{
	/* 产生起始位 */
	I2C_GenerateSTART(I2C2,ENABLE);
	while(!I2C_CheckEvent(I2C2,I2C_EVENT_MASTER_MODE_SELECT)); //等待完成	
	
	I2C_Send7bitAddress(I2C2,SlaveAddr,I2C_Direction_Transmitter);//发送器件地址
	while(!I2C_CheckEvent(I2C2,I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED));//等待完成
	
	I2C_SendData(I2C2,WriteAddr); //内部功能地址
	while(!I2C_CheckEvent(I2C2,I2C_EVENT_MASTER_BYTE_TRANSMITTED));//等待完成
	
	while(NumByteToWrite--){ //循环发送数据	
		I2C_SendData(I2C1,*pBuffer); //发送数据
		pBuffer++; //数据指针移位
		while (!I2C_CheckEvent(I2C2,I2C_EVENT_MASTER_BYTE_TRANSMITTED));//等待完成
	}
	
	/* 产生停止信号 */
	I2C_GenerateSTOP(I2C2,ENABLE);
}



/**
* Function：I2C2发送一个字节
* Parameter：
				1. SlaveAddr       	发送的器件地址
				2. WriteAddr       	器件的内部寄存器
				3. pBuffer         	发送数据内容
**/
void I2C2_SAND_BYTE(u8 SlaveAddr,u8 writeAddr,u8 pBuffer)
{
	/* 产生起始位 */
	I2C_GenerateSTART(I2C2,ENABLE);
	while(!I2C_CheckEvent(I2C2,I2C_EVENT_MASTER_MODE_SELECT)); //等待完成
	
	I2C_Send7bitAddress(I2C2,SlaveAddr, I2C_Direction_Transmitter); //发送从器件地址及状态（写入）
	while(!I2C_CheckEvent(I2C2,I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED)); //等待完成	
	
	I2C_SendData(I2C2,writeAddr); //发送从器件内部寄存器地址
	while(!I2C_CheckEvent(I2C2,I2C_EVENT_MASTER_BYTE_TRANSMITTED)); //等待完成	
	
	I2C_SendData(I2C2,pBuffer); //发送要写入的内容
	while(!I2C_CheckEvent(I2C2,I2C_EVENT_MASTER_BYTE_TRANSMITTED)); //等待完成

	/* 产生停止信号 */
	I2C_GenerateSTOP(I2C2,ENABLE);
}



/**
* Function：I2C2读取数据串
* Parameter：
				1. SlaveAddr       	发送的器件地址
				2. readAddr       	器件的内部寄存器
				3. pBuffer         	发送数据内容
				4. NumByteToWrite		多少组数据
**/
void I2C2_READ_BUFFER(u8 SlaveAddr,u8 readAddr,u8* pBuffer,u16 NumByteToRead)
{
	while(I2C_GetFlagStatus(I2C2,I2C_FLAG_BUSY));
	
	I2C_GenerateSTART(I2C2,ENABLE);//开启信号
	while(!I2C_CheckEvent(I2C2,I2C_EVENT_MASTER_MODE_SELECT));	//清除 EV5
	
	I2C_Send7bitAddress(I2C2,SlaveAddr, I2C_Direction_Transmitter); //写入器件地址
	while(!I2C_CheckEvent(I2C2,I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED));//清除 EV6
	
	I2C_Cmd(I2C2,ENABLE);
	
	I2C_SendData(I2C2,readAddr); //发送读的地址
	while(!I2C_CheckEvent(I2C2,I2C_EVENT_MASTER_BYTE_TRANSMITTED)); //清除 EV8
	
	I2C_GenerateSTART(I2C2,ENABLE); //开启信号
	while(!I2C_CheckEvent(I2C2,I2C_EVENT_MASTER_MODE_SELECT)); //清除 EV5
	
	I2C_Send7bitAddress(I2C2,SlaveAddr,I2C_Direction_Receiver); //将器件地址传出，主机为读
	while(!I2C_CheckEvent(I2C2,I2C_EVENT_MASTER_RECEIVER_MODE_SELECTED)); //清除EV6
	
	while(NumByteToRead){
		if(NumByteToRead == 1){ //只剩下最后一个数据时进入 if 语句
			I2C_AcknowledgeConfig(I2C2,DISABLE); //最后有一个数据时关闭应答位
			I2C_GenerateSTOP(I2C2,ENABLE);	//最后一个数据时使能停止位
		}
		if(I2C_CheckEvent(I2C2,I2C_EVENT_MASTER_BYTE_RECEIVED)){ //读取数据
			*pBuffer = I2C_ReceiveData(I2C2);//调用库函数将数据取出到 pBuffer
			pBuffer++; //指针移位
			NumByteToRead--; //字节数减 1 
		}
	}
	
	I2C_AcknowledgeConfig(I2C2,ENABLE);
}



/**
* Function：I2C2读取一个字节
* Parameter：
				1. SlaveAddr       	发送的器件地址
				2. readAddr       	器件的内部寄存器

**/
u8 I2C2_READ_BYTE(u8 SlaveAddr,u8 readAddr)
{ 
	u8 a;
	
	while(I2C_GetFlagStatus(I2C2,I2C_FLAG_BUSY));
	
	I2C_GenerateSTART(I2C2,ENABLE);
	while(!I2C_CheckEvent(I2C2,I2C_EVENT_MASTER_MODE_SELECT));
	
	I2C_Send7bitAddress(I2C2,SlaveAddr, I2C_Direction_Transmitter); 
	while(!I2C_CheckEvent(I2C2,I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED));
	
	I2C_Cmd(I2C2,ENABLE);
	
	I2C_SendData(I2C2,readAddr);
	while(!I2C_CheckEvent(I2C2,I2C_EVENT_MASTER_BYTE_TRANSMITTED));
	
	I2C_GenerateSTART(I2C2,ENABLE);
	while(!I2C_CheckEvent(I2C2,I2C_EVENT_MASTER_MODE_SELECT));
	
	I2C_Send7bitAddress(I2C2,SlaveAddr, I2C_Direction_Receiver);
	while(!I2C_CheckEvent(I2C2,I2C_EVENT_MASTER_RECEIVER_MODE_SELECTED));
	
	I2C_AcknowledgeConfig(I2C2,DISABLE); //最后有一个数据时关闭应答位
	
	I2C_GenerateSTOP(I2C2,ENABLE);	//最后一个数据时使能停止位
	
	a = I2C_ReceiveData(I2C2);
	return a;
}
