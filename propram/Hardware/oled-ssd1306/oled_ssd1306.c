/***********************************************************************************

* Author: 影风远sinkfarli
* Create Date: 2022.5.12
* Presonal Blog: 影风远sinkfarli

* Explain:
			1. oled-ssd1306 drive program

* Notice：一行放15个字符
***********************************************************************************/


#include "oled_ssd1306.h"
#include "ASCII_8x16.h"



	u8 command[28] = {
	0xae,			//关屏幕
	0x00,0x10,//开始地址（双字节）       
	0xd5,0x80,//显示时钟频率
	0xa8,0x3f,//复用率
	0xd3,0x00,//显示偏移
	0XB0,			//写入页位置（0xB0~7）
	0x40,			//显示开始线
	0x8d,0x14,//VCC电源
	0xa1,			//设置段重新映射
	0xc8,			//COM输出方式
	0xda,0x12,//COM输出方式
	
	0x81,//亮度对比寄存器
	0xff,//设置亮度数据：0~255（255最高，即0x00~0xff）
	
	0xd9,0xf1,//充电周期
	0xdb,0x30,//VCC电压输出
	0x20,0x00,//水平寻址设置
	0xa4,			//0xa4:正常显示，0xa5:整体点亮
	0xa6,			//0xa6:正常显示，0xa7:反色显示
	0xaf			//开屏幕
	};


/**
* Function：OLED初始化
**/
void OLEDSSD1306_Init(void)
{
	OLED_Display_off();//OLED关闭屏幕
	OLED_Display_clear();//OLED清空屏幕	
	OLED_Display_on();Text();//OLED打开屏幕	
}



/**
* Function：OLED打开屏幕
**/
void OLED_Display_on(void)
{
	I2C1_SAND_BYTE(OLEDSSD1306_Add,COM,command[27]);
}



/**
* Function：OLED关闭屏幕
**/
void OLED_Display_off(void)
{
	I2C1_SAND_BYTE(OLEDSSD1306_Add,COM,command[0]);
}



/**
* Function：OLED亮度设置
* Paramater：
				x 亮度值
**/
void OLED_Display_luminance(u8 x)
{
	I2C1_SAND_BYTE(OLEDSSD1306_Add,COM,command[17]);
	I2C1_SAND_BYTE(OLEDSSD1306_Add,COM,x);	
}



/**
* Function：OLED清空屏幕
**/
void OLED_Display_clear(void)
{
	u8 j,t;
	
	for(t = 0xB0;t < 0xB8;t++)//设置起始页地址为0xB0
	{
		I2C1_SAND_BYTE(OLEDSSD1306_Add,COM,t);//页地址（从0xB0到0xB7）
		I2C1_SAND_BYTE(OLEDSSD1306_Add,COM,0x10); //起始列地址的高4位
		I2C1_SAND_BYTE(OLEDSSD1306_Add,COM,0x00);//起始列地址的低4位
		
		/* 整页内容填充 */
		for(j=0;j<128;j++)
		{	
 			I2C1_SAND_BYTE(OLEDSSD1306_Add,DAT,0x00);
 		}
	}
}


/**
* Function：OLED显示英文与数字8*16的ASCII码
* Notice：取模大小为8*16，取模方式为“从左到右从上到下”“纵向8点下高位”
* Parameter：
				x  显示英文与数字的页坐标（从0到7）（此处不可修改）
				y  显示英文与数字的列坐标（从0到128）
				w  要显示英文与数字的编号
**/
void OLED_Display_8x16(u8 x, u8 y, u16 w)
{ 
	u8 j,t,c=0;
	y=y+2; //因OLED屏的内置驱动芯片是从0x02列作为屏上最左一列，所以要加上偏移量
	
	for(t=0;t<2;t++)
	{
		I2C1_SAND_BYTE(OLEDSSD1306_Add,COM,0xb0+x); //页地址（从0xB0到0xB7）
		I2C1_SAND_BYTE(OLEDSSD1306_Add,COM,y/16+0x10); //起始列地址的高4位
		I2C1_SAND_BYTE(OLEDSSD1306_Add,COM,y%16);	//起始列地址的低4位
		
		/* 整页内容填充 */
		for(j=0;j<8;j++)
		{ 
 			I2C1_SAND_BYTE(OLEDSSD1306_Add,DAT,ASCII_8x16[(w*16)+c-512]);//为了和ASII表对应要减512
			c++;
		}
		
		x++; //页地址加1
	}
}



/**
* Function：向器件发送一个字符串,长度64字符之内
* Notice：取模大小为8*16，取模方式为“从左到右从上到下”“纵向8点下高位”
* Parameter：
				row   显示英文与数字的页坐标（从0到7）（此处不可修改）
        *str  发送的字符串数据
**/
void OLED_Display_8x16_Buffer(u8 row,u8 *str)
{
	u8 r=0;
	
	while(*str != '\0')
	{
		OLED_Display_8x16(row,r*8,*str++);
		r++;
  }	
}



///**
//* Function：显示全屏图片
//**/
//void OLED_DISPLAY_img(void)
//{
//	u8 m,i;
//	
//	for(m=0;m<8;m++)
//	{
//		I2C_SAND_BYTE(OLEDSSD1306_Add,COM,0xb0+m);
//		I2C_SAND_BYTE(OLEDSSD1306_Add,COM,0x10); //起始列地址的高4位
//		I2C_SAND_BYTE(OLEDSSD1306_Add,COM,0x02);	//起始列地址的低4位
//		for(i=0;i<128;i++){//送入128次图片显示内容
//			I2C_SAND_BYTE(OLEDSSD1306_Add,DAT,PIC1[i+m*128]);}
//	}
//}
