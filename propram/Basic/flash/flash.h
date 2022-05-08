#ifndef _FLASH_H
#define _FLASH_H
#include "sys.h"

/* 宏定义 */

/* 封装函数声明 */
void FLASH_Write(u32 add,u16 data);	//FLASH写入数据
u16 FLASH_Read(u32 add);	//读取存储在FLASH中的数据

#endif
