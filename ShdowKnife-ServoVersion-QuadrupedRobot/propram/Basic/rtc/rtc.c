/***********************************************************************************

* Author: 影风远sinkfarli
* Create Date: 2022.4.27
* Presonal Blog: 影风远sinkfarli

* Explain: 
			1. RTC drive program
			2. RTC apply program

***********************************************************************************/



#include "rtc.h"

/* 以下两条全局变量用于RTC时间的读取 */
u8 rmon,rday,rhour,rmin,rsec,rweek;	//2位月日时分秒周
u16 ryear;	//4位年



/******************************* RCT drive program ********************************/

/**
*	Function: 首次启用RTC的设置
*	Explain:
			1. 
**/
void RTC_First_Config(void)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_PWR | RCC_APB1Periph_BKP, ENABLE);	//启用PWR和BKP的时钟（from APB1）
	PWR_BackupAccessCmd(ENABLE);	//后备域解锁
	BKP_DeInit();	//备份寄存器复位模块
	RCC_LSEConfig(RCC_LSE_ON);	//外部32.768KHZ晶振开启
	while (RCC_GetFlagStatus(RCC_FLAG_LSERDY) == RESET);	//等待稳定
	RCC_RTCCLKConfig(RCC_RTCCLKSource_LSE); 	//RTC时钟配置成LSE（外部低速晶振32.768KHZ）
	RCC_RTCCLKCmd(ENABLE);	//RTC开启
	RTC_WaitForSynchro();	//开启后需要等带APB1时钟与RTC时钟同步，才能读写寄存器
	RTC_WaitForLastTask();	//读写寄存器前，要确定上一个操作已经结束
	RTC_SetPrescaler(32767);	//设置RTC分频器，使RTC时钟为1HZ，RTC period = RTCCLK/RTC_PR = (32.768KHz)/(32767+1)
	RTC_WaitForLastTask();   //等待寄存器写入完成	

	/* 当不使用RTCm秒中断，可以屏蔽下面两条代码 */
	//RTC_ITConfig(RTC_IT_SEC, ENABLE);	//使能秒中断
	//RTC_WaitForLastTask();	等待写入完成
}

/**
*	Function: RTC实时时钟初始化程序
**/
void RTC_Config(void)
{
	/** 在BKY的后备寄存器1中，存了一个特殊字符0xA5A5 **/
	/** 第一次上次上电或后备电源掉电后，该寄存器数据丢失，表面RTC数据丢失，需要重新配置 **/
	/* 判断寄存器数据是否丢失 */
	if (BKP_ReadBackupRegister(BKP_DR1) != 0xA5A5)
	{   
			RTC_First_Config();      
			BKP_WriteBackupRegister(BKP_DR1, 0xA5A5);
	}
	/* 若后备寄存器没有掉电，则无需重新匹配RTC */
	else
	{
		if (RCC_GetFlagStatus(RCC_FLAG_PORRST) != RESET)
		{
			/* 上电复位程序 */
		}
		else if (RCC_GetFlagStatus(RCC_FLAG_PINRST) != RESET)
		{
			/* 外部RST管脚复位程序 */
		}       
		RCC_ClearFlag();	//清楚RCC中复位标志

		/* Explain: 虽然RTC模块不需要重新配置，且掉电后依靠后备电池依然运行。但是每次上电后，还是要使能RTCCLK */
		RCC_RTCCLKCmd(ENABLE);	//使能RTCCLK
		RTC_WaitForSynchro();	//等待RTC时钟与APB1时钟同步

		/* 当不使用RTC中断，可以屏蔽下面2条 */
		//RTC_ITConfig(RTC_IT_SEC, ENABLE);	//使能秒中断
		//TC_WaitForLastTask();	//等待操作完成
    }
	
		#ifdef RTCClockOutput_Enable   
			RCC_APB1PeriphClockCmd(RCC_APB1Periph_PWR | RCC_APB1Periph_BKP, ENABLE);
			PWR_BackupAccessCmd(ENABLE);   
			BKP_TamperPinCmd(DISABLE);   
			BKP_RTCOutputConfig(BKP_RTCOutputSource_CalibClock);
		#endif
}

/**
* 	Functin: RTC时钟1秒触发中断程序（名称固定不可修改）
**/
void RTC_IRQHandler(void)
{ 
	if (RTC_GetITStatus(RTC_IT_SEC) != RESET)
	{

	}
	RTC_ClearITPendingBit(RTC_IT_SEC); 
	RTC_WaitForLastTask();
}

/**
*	Function: 闹钟中断处理程序（名称固定不可修改）
**/
void RTCAlarm_IRQHandler(void)
{	
	if(RTC_GetITStatus(RTC_IT_ALR) != RESET)
	{
	
	}
	RTC_ClearITPendingBit(RTC_IT_ALR);
	RTC_WaitForLastTask();
}



/**************************** RCT 日历时间 apply program ******************************/

/* 月份数据表 */
u8 const table_week[12]={0,3,3,6,1,4,6,2,5,0,3,5};	//月修正数据表
const u8 mon_table[12]={31,28,31,30,31,30,31,31,30,31,30,31};	//平年的月份日数表

/**
*	Function: 判断是否是闰年程序
*	Paramenter: 
				1. u16 year		输入年份
2.	return		闰年返回 1；不是闰年返回0
* Exlpain:
			1. 月份：1 2 3 4 5 6 7 8 9 10 11 12
**/
u8 Is_Leap_Year(u16 year)
{                    
	if(year%4==0)	//年份必须能被4整除
	{ 
		if(year%100==0)
		{		
			if(year%400==0)return 1;	//如果以00结尾，还要能被400整除        
			else return 0;  
		}else return 1;  
	}
	else return 0;
}

/**
*	Function:	写入时间
* Parament: 
				1. syear
				2. smon
				3. sday
				4. hour
				5. min
				6. sec
**/
u8 RTC_Set(u16 syear,u8 smon,u8 sday,u8 hour,u8 min,u8 sec)
{
	u16 t;
	u32 seccount=0;
	
	if(syear<2000 || syear>2099)return 1;	//syesr范围1970~2099，此处设置if判断范围为2000~2099
	
	/* 把所有年份的秒钟相加 */
	for(t=1970;t < syear;t++)
	{
		if(Is_Leap_Year(t)) seccount += 31622400; //闰年的秒钟数
		else seccount += 31536000;		//平年的秒钟数
	}
	smon -= 1;
	
	/* 把前面月份的秒钟数相加 */
	for(t=0;t < smon;t++)
	{
		seccount += (u32)mon_table[t]*86400;	//月份秒钟数相加
		if(Is_Leap_Year(syear)&&t==1)seccount += 86400;		//闰年2月份增加一天的秒钟数
	}
	
	
	seccount += (u32)(sday-1)*86400;	//把前面日期的秒钟数相加
	seccount += (u32)hour*3600; 	//小时秒钟数
	seccount += (u32)min*60;		//分钟秒钟数
	seccount += sec;		//最后的秒钟数加上
	
	RTC_First_Config();		//重新初始化时钟
	BKP_WriteBackupRegister(BKP_DR1, 0xA5A5);		//配置完成后，向后备寄存器中写特殊字符0xA5A5
	RTC_SetCounter(seccount);		//把换算好的计数器值写入
	RTC_WaitForLastTask(); 	//等待写入完成
	return 0;  	//返回0写入成功
}

/**
*	Function: 读出当前时间值
**/
u8 RTC_Get(void)
{
	static u16 daycnt = 0;
	u32 timecount = 0;
	u32 temp = 0;
	u16 temp1 = 0;
	timecount = RTC_GetCounter();		
	temp = timecount/86400;		//得到天数（秒钟数对应）
	
	/* 超过一天 */
	if(daycnt != temp)
	{
		daycnt = temp;
		temp1 = 1970;		//从1970年开始
		while(temp>=365)
		{
			
			/* 判断是否为闰年*/
			if(Is_Leap_Year(temp1))
			{
			 if(temp >= 366)temp -= 366;	//闰年的秒钟数
			 else 
				{
					temp1++;
					break;
				} 
			}
			else temp-=365;	//平年的秒钟数
			temp1++; 
		}
		
		ryear = temp1;	//得到年份
		temp1 = 0;
		
		/* 超过一个月 */
		while(temp >= 28)
		{
			
			/* 判断年份是不是闰年的2月份 */
			if(Is_Leap_Year(ryear)&&temp1 == 1)
			{
				if(temp >= 29)temp -= 29;	//闰年的秒钟数
				else break;
			}
			else
			{
				if(temp >= mon_table[temp1])temp -= mon_table[temp1];	//平年
				else break;
			}
			temp1++; 
		}
		rmon=temp1+1;
		rday=temp+1;
	}
	
	temp = timecount%86400; 	//得到秒钟数
	rhour = temp/3600;		//得到小时
	rmin = (temp%3600)/60;   //得到分钟
	rsec = (temp%3600)%60;	 //得到秒钟
	rweek = RTC_Get_Week(ryear,rmon,rday); 	//获取星期值
	return 0;
}

/**
*	Function:	按年月日基数星期（只允许1970~2099年）
**/
u8 RTC_Get_Week(u16 year,u8 month,u8 day)
{
	u16 temp2;
	u8 yearH,yearL;
	
	yearH = year/100;
	yearL = year%100;
	
	/* 如果为21世纪，年份相加100 */
	if (yearH > 19)yearL += 100;
	
	/* 所过闰年数只计算1900之后 */
	temp2 = yearL+yearL/4;
	temp2 = temp2%7;
	temp2 = temp2+day+table_week[month-1];
	if (yearL%4 == 0&&month<3)temp2--;
	return (temp2%7);	//返回星期值
}
