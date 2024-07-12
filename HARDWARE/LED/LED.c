#include "led.h"


//初始化PA5和PA4为输出口.并使能这两个口的时钟		    , PB6测试使用，可屏蔽
//LED IO初始化
void LED_Init(void)
{
 
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //使能PB,PA端口时钟
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6;				 //LED0-->PC.6 端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //根据设定参数初始化GPIOA.4
 GPIO_ResetBits(GPIOC,GPIO_Pin_6);						 //PA.4 输出低
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7;	    		 //PC.7 端口配置, 推挽输出
 GPIO_Init(GPIOC, &GPIO_InitStructure);	  				 //推挽输出 ，IO口速度为50MHz
 GPIO_ResetBits(GPIOC,GPIO_Pin_7); 						 //PA.5 输出高


}
 

