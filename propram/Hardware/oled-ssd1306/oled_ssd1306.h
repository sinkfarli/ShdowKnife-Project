#ifndef _OLED_SSD1306_H
#define _OLED_SSD1306_H

#include "sys.h"
#include "i2c.h"

#include "function1.h"


/* 宏定义 */
#define OLEDSSD1306_Add 0x78	//0.96英寸OLED屏幕器件地址
#define COM	0x00	//页面寻址模式下列起始地址
#define DAT	0x40	//显示起始行


/* 函数封装 */
void OLEDSSD1306_Init(void);//OLED初始化
void OLED_Display_on(void);//OLED打开屏幕
void OLED_Display_off(void);//OLED关闭屏幕
void OLED_Display_clear(void);//OLED清空屏幕
void OLED_Display_luminance(u8 x);//OLED亮度设置
void OLED_Display_8x16(u8 x, u8 y, u16 w);//OLED显示英文与数字8*16的ASCII码
void OLED_Display_8x16_Buffer(u8 row,u8 *str);//向器件发送一个字符串,长度64字符之内
//void OLED_DISPLAY_img(void);//显示全屏图片

#endif
