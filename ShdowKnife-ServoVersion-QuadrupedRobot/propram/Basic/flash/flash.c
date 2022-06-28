/*********************************************************************************************

* Author: 影风远sinkfarli
* Create Date: 2022.4.22
* Presonal Blog: 影风远sinkfarli

*	Explain: FLASH drive program

*********************************************************************************************/

#include "flash.h"

/**
* Function: FLASH写入数据
* Parameter Explain: 
				1. u32 add    32位FLASH地址位置
				2. u16 data		写入的16位数据
**/
void FLASH_Write(u32 add,u16 data)
{
	//RCC_HSICmd(ENABLE);	//打开HSI高速时钟，打开了就无须再打开
	FLASH_Unlock();	//解锁FLASH编程擦写控制器
	FLASH_ClearFlag(FLASH_FLAG_BSY|FLASH_FLAG_EOP|FLASH_FLAG_PGERR|FLASH_FLAG_WRPRTERR);	//清除标志位
	FLASH_ErasePage(add);	//擦除指定的地址页
	FLASH_ProgramHalfWord(add,data);	//从指定页的adder地址开始写入数据
	FLASH_ClearFlag(FLASH_FLAG_BSY|FLASH_FLAG_EOP|FLASH_FLAG_PGERR|FLASH_FLAG_WRPRTERR);	//清除标志位
	FLASH_Lock();	//锁定FLASH编程擦除控制器
}

/**
*	Function: 读取存储在FLASH中的数据
* Paramenter Explain: 
				1. u32 add    32位FLASH地址位置
				2. return     16位数据
**/
u16 FLASH_Read(u32 add)
{
	u16 a; //存放临时数据
	a = *(u16*)(add);	//从指定页的addr地址开始读
	
	return a;	//返回读出的数据
}
