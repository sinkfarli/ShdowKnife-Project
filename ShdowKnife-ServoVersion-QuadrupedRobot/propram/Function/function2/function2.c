/***********************************************************************************

* Author: 影风远sinkfarli
* Create Date: 2022.5.16
* Presonal Blog: 影风远sinkfarli

* Explain:
			1. 电机的算法程序
			

***********************************************************************************/

#include "function2.h"



void FT1_Servo_CmmandBB(void)
{
	u16 i=0;
	for(i=675;i<=2800;i++)
	{
		setPWM(0,0,i);
		delay_ms(3);
	}
}
