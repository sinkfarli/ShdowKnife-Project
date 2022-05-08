#ifndef _USART_H
#define _USART_T

/* 包含C语言库 */
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/* 包含stm32固件库 */
#include "stdio.h"
#include "sys.h"

/* 宏定义 */
#define USART_n USART1 //定义使用printf函数的串口，其他串口要使用USART_printf专用函数发送

#define USART1_REC_LEN	200 //定义USAART1最大接收200字节
#define USART2_REC_LEN	200 //定义USAART2最大接收200字节
#define USART3_REC_LEN	200 //定义USAART3最大接收200字节

/** 不使用某个串口时要禁止此串口，以减少编译量。 使能（1）/禁止（0） **/
#define EN_USART1 1 
#define EN_USART2 0
#define EN_USART3 0

/* 全局变量声明 */
/** 接收缓冲，最大USART_REC_LEN个字节，末字节为换行符 **/
extern u8 USART1_RX_BUF[USART1_REC_LEN];
extern u8 USART2_RX_BUF[USART2_REC_LEN];
extern u8 USART3_RX_BUF[USART3_REC_LEN];

/** 接收状态标记 **/
extern u16 USART1_RX_STA;
extern u16 USART2_RX_STA;
extern u16 USART3_RX_STA;

/* 封装函数声明 */
void USART1_Init(u32 bound);	//USART1 初始化并启动程序
void USART2_Init(u32 bound);	//USART2 初始化并启动程序
void USART3_Init(u32 bound);	//USART3 初始化并启动程序
void USART1_printf(char* fmt,...);	//USART1 专用的 printf 函数
void USART2_printf(char* fmt,...);  //USART2 专用的 printf 函数
void USART3_printf(char* fmt,...);  //USART3 专用的 printf 函数

#endif
