#include "led.h"
#include "delay.h"
#include "sys.h"
#include "key.h"
#include "usart.h"
#include "exit.h" 
#include "pwm.h" 
#include "uart.h"
#include "LobotSerialServo.h"
#include "bool.h"
#include "Bluetooth.h"
#include "dance.h"
#include "Uart4.h"
#include "Usart3.h"
#include "jingzou.h"

#include "stm32f10x.h"
#include <stdio.h>

u8 bt=0;
u8 sj=0;
u8 i=0;
u8 j=0;
u8 a=0;
int main(void)
 {
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); 
  delay_init();	    	  														//延时函数初始化	 
	uartInit(115200);//舵机	  
	LED_Init();
	bluetooth_init(9600);  //蓝牙
	servo_init();
	Uart3_init(9600);
	Uart4_init(9600);
	LED0=0;
	LED1=0;
	
	servo_angle4(90);
	servo_angle3(90);
	servo_angle2(40);
	servo_angle1(40);
	delay_ms(805); 
	servo_angle4(90);
	servo_angle3(90);
	servo_angle2(90);
	servo_angle1(90);
	 delay_ms(805); 
	//qibu();
  while(1)
	{
	delay_ms(3000);
//	 USART_SendData(UART4,'0');
//	 USART_SendData(USART1,'0');
//		USART_SendData(USART3,'0');
		if(a==0)
		{
			//guizhong();
		}
		//qibu1();
		else if(a==1)
		{
			zouluend();
		}
		else if(a==2)
		{
			zuozhuanend();
		}
		else if(a==3)
		{
			youzhuanend();
		}
		
		/*
		if(bt==1) 
		{
			zoulu10();
		}
		else if(bt==2) 
		{
			zuozhuan6();
		}
		else if(bt==3)
		{
			youzhuan5();
		}
		else if(bt==4)
		{
			guizhong();
      //delay_ms(3000);
		}
		else if(bt==5)
		{
			guizhong();
			yuezhang();
		}*/
	/*	if(bt==0) 
		{
			LED1=0;
			LED0=0;
			qibu();
			//zoulu6();
		}
		//zoulu10 第一步
		else if(bt==1) 
		{
			LED1=1;
			LED0=1;
			zoulu9();
			
			//zoulu6();
		}
		else if(bt==2)
		{
			LED1=0;
			LED0=0;
			guizhong();
			//zuozhuan2();
		}
		//zoulu3();
		//youzhuan();
		//zuozhuan2();
		else if(bt==3)
		{
			LED1=1;
			LED0=0;
			zuozhuan6();
			//zuozhuan2();
		}
		else if(bt==4)
		{
			LED1=0;
			LED0=1;
			youzhuan4();
		}
		else if(bt==5)
		{
			LED1=1;
			LED0=1;
			zoulu10();
		}
		else if(bt==6)
		{
			LED1=1;
			LED0=1;
			zuozhuan6();
		}
		else if(bt==7)
		{
			LED1=1;
			LED0=1;
			youzhuan5();
		}
		*/
	}
 }
