/***********************************************************************************

* Author: 影风远sinkfarli
* Create Date: 2022.5.15
* Presonal Blog: 影风远sinkfarli

* Explain:
			1. servo-pca9685 drive program

* Notice：
***********************************************************************************/


#include "servo_pca9685.h"
#include "math.h"


/**
*	Function: 设置PWM频率
* Parameret:
			1. freq	写入的频率
*/
void setPWMFreq(float freq)
{
  freq *= 0.9;
  float prescaleval = 25000000;
  prescaleval /= 4096;
  prescaleval /= freq;
  prescaleval -= 1;
	
	u8 prescale = floor(prescaleval + 0.5);
	u8 oldmode = I2C2_READ_BYTE(PCA9685_ADDR,PCA9685_MODE1);
  u8 newmode = (oldmode&0x7F) | 0x10; // sleep
	
  I2C2_SAND_BYTE(PCA9685_ADDR,PCA9685_MODE1, newmode); // go to sleep
  I2C2_SAND_BYTE(PCA9685_ADDR,PCA9685_PRESCALE, prescale); // set the prescaler
  I2C2_SAND_BYTE(PCA9685_ADDR,PCA9685_MODE1, oldmode);
	delay_s(1);
  I2C2_SAND_BYTE(PCA9685_ADDR,PCA9685_MODE1, oldmode | 0xa1);
}


/**
*	Function: 写入PWM（即旋转角度）
* Parameret:
			1. num	舵机PWM输出引脚0~15
			2. on		PWM上升计数值0~4096
			3. off	PWM下降计数值0~4096
* Explain：
			一个PWM周期分成4096份，由0开始+1计数，计到on时跳变为高电平，继续计数到off时
			跳变为低电平，直到计满4096重新开始。所以当on不等于0时可作延时,当on等于0时，
			off/4096的值就是PWM的占空比。
*/
void setPWM(u8 num, u16 on, u16 off)
{
	I2C2_SAND_BYTE(PCA9685_ADDR,LED0_ON_L*num,on);
	I2C2_SAND_BYTE(PCA9685_ADDR,LED0_ON_H*num,on>>8);
	I2C2_SAND_BYTE(PCA9685_ADDR,LED0_OFF_L*num,off);
	I2C2_SAND_BYTE(PCA9685_ADDR,LED0_OFF_H*num,off>>8);	
}

