#include "pwm.h"
#include "led.h"
//////////////////////////////////////////////////////////////////////////////////	 
//±¾³ÌĞòÖ»¹©Ñ§Ï°Ê¹ÓÃ£¬Î´¾­×÷ÕßĞí¿É£¬²»µÃÓÃÓÚÆäËüÈÎºÎÓÃÍ¾
//ALIENTEK Mini STM32¿ª·¢°å
//PWM  Çı¶¯´úÂë			   
//ÕıµãÔ­×Ó@ALIENTEK
//¼¼ÊõÂÛÌ³:www.openedv.com
//ĞŞ¸ÄÈÕÆÚ:2010/12/03
//°æ±¾£ºV1.0
//°æÈ¨ËùÓĞ£¬µÁ°æ±Ø¾¿¡£
//Copyright(C) ÕıµãÔ­×Ó 2009-2019
//All rights reserved
////////////////////////////////////////////////////////////////////////////////// 	  


//PWMÊä³ö³õÊ¼»¯
//arr£º×Ô¶¯ÖØ×°Öµ
//psc£ºÊ±ÖÓÔ¤·ÖÆµÊ

#include "pwm.h"
#include "led.h"
//////////////////////////////////////////////////////////////////////////////////	 
//±¾³ÌĞòÖ»¹©Ñ§Ï°Ê¹ÓÃ£¬Î´¾­×÷ÕßĞí¿É£¬²»µÃÓÃÓÚÆäËüÈÎºÎÓÃÍ¾
//ALIENTEK Mini STM32¿ª·¢°å
//PWM  Çı¶¯´úÂë			   
//ÕıµãÔ­×Ó@ALIENTEK
//¼¼ÊõÂÛÌ³:www.openedv.com
//ĞŞ¸ÄÈÕÆÚ:2010/12/03
//°æ±¾£ºV1.0
//°æÈ¨ËùÓĞ£¬µÁ°æ±Ø¾¿¡£
//Copyright(C) ÕıµãÔ­×Ó 2009-2019
//All rights reserved
////////////////////////////////////////////////////////////////////////////////// 	  


//PWMÊä³ö³õÊ¼»¯
//arr£º×Ô¶¯ÖØ×°Öµ
//psc£ºÊ±ÖÓÔ¤·ÖÆµÊ

//PWM1  PA6  TIM3_1
//PWM2  PA7  TIM3_2
//PWM3  PB0  TIM3_3
//PWM4  PB1  TIM3_4
//PWM5  PB13 TIM1_1
 
void TIM5_PWM_Init(u16 arr,u16 psc)
{  
	GPIO_InitTypeDef GPIO_InitStructure;
	TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
	TIM_OCInitTypeDef  TIM_OCInitStructure;
	
	RCC_APB2PeriphClockCmd(RCC_APB1Periph_TIM5, ENABLE);//
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM5, ENABLE);
	
		
 	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA , ENABLE);  //Ê¹ÄÜGPIOÍâÉèÊ±ÖÓÊ¹ÄÜ
	RCC_APB1PeriphClockCmd(RCC_APB2Periph_GPIOA , ENABLE);
	
   //ÉèÖÃ¸ÃÒı½ÅÎª¸´ÓÃÊä³ö¹¦ÄÜ,Êä³öTIM1 CH1µÄPWMÂö³å²¨ĞÎ
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0; //TIM_CH1
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;  //¸´ÓÃÍÆÍìÊä³ö
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
 //ÉèÖÃ¸ÃÒı½ÅÎª¸´ÓÃÊä³ö¹¦ÄÜ,Êä³öTIM1 CH1µÄPWMÂö³å²¨ĞÎ
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1; //TIM_CH1
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;  //¸´ÓÃÍÆÍìÊä³ö
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	TIM_TimeBaseStructure.TIM_Period = arr; //ÉèÖÃÔÚÏÂÒ»¸ö¸üĞÂÊÂ¼ş×°Èë»î¶¯µÄ×Ô¶¯ÖØ×°ÔØ¼Ä´æÆ÷ÖÜÆÚµÄÖµ	 80K
	TIM_TimeBaseStructure.TIM_Prescaler =psc; //ÉèÖÃÓÃÀ´×÷ÎªTIMxÊ±ÖÓÆµÂÊ³ıÊıµÄÔ¤·ÖÆµÖµ  ²»·ÖÆµ
	TIM_TimeBaseStructure.TIM_ClockDivision = 0; //ÉèÖÃÊ±ÖÓ·Ö¸î:TDTS = Tck_tim
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;  //TIMÏòÉÏ¼ÆÊıÄ£Ê½
	TIM_TimeBaseInit(TIM5, &TIM_TimeBaseStructure); ////¸ù¾İTIM_TimeBaseInitStructÖĞÖ¸¶¨µÄ²ÎÊı³õÊ¼»¯TIMxµÄÊ±¼ä»ùÊıµ¥Î» 
 
	TIM_OCInitStructure.TIM_OCMode = TIM_OCMode_PWM2; //Ñ¡Ôñ¶¨Ê±Æ÷Ä£Ê½:TIMÂö³å¿í¶Èµ÷ÖÆÄ£Ê½2
	TIM_OCInitStructure.TIM_OutputState = TIM_OutputState_Enable; //±È½ÏÊä³öÊ¹ÄÜ
	TIM_OCInitStructure.TIM_Pulse = 0; //ÉèÖÃ´ı×°Èë²¶»ñ±È½Ï¼Ä´æÆ÷µÄÂö³åÖµ
	TIM_OCInitStructure.TIM_OCPolarity = TIM_OCPolarity_Low; //Êä³ö¼«ĞÔ:TIMÊä³ö±È½Ï¼«ĞÔ¸ß
	
	TIM_OC1Init(TIM5, &TIM_OCInitStructure);  //¸ù¾İTIM_OCInitStructÖĞÖ¸¶¨µÄ²ÎÊı³õÊ¼»¯ÍâÉèTIMx
	TIM_OC2Init(TIM5, &TIM_OCInitStructure);
 
 // TIM_CtrlPWMOutputs(TIM1,ENABLE);	//MOE Ö÷Êä³öÊ¹ÄÜ	(TIM1TIM8²ÅĞèÒªÊ¹ÓÃ)
	
	TIM_OC1PreloadConfig(TIM5, TIM_OCPreload_Enable);  //CH1Ô¤×°ÔØÊ¹ÄÜ	
	TIM_OC2PreloadConfig(TIM5, TIM_OCPreload_Enable);  //CH1Ô¤×°ÔØÊ¹ÄÜ	

  TIM_CtrlPWMOutputs(TIM5,ENABLE);
	TIM_ARRPreloadConfig(TIM5, ENABLE); //Ê¹ÄÜTIMxÔÚARRÉÏµÄÔ¤×°ÔØ¼Ä´æÆ÷
	TIM_Cmd(TIM5, ENABLE);  //Ê¹ÄÜTIM1
 
 TIM_CtrlPWMOutputs(TIM3,ENABLE);	//MOE Ö÷Êä³öÊ¹ÄÜ	
	
}

void TIM3_PWM_Init(u16 arr,u16 psc)
{  
	GPIO_InitTypeDef GPIO_InitStructure;
	TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
	TIM_OCInitTypeDef  TIM_OCInitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);//
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);
	
 	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA , ENABLE);  //Ê¹ÄÜGPIOÍâÉèÊ±ÖÓÊ¹ÄÜ
	RCC_APB1PeriphClockCmd(RCC_APB2Periph_GPIOA , ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB , ENABLE);  //Ê¹ÄÜGPIOÍâÉèÊ±ÖÓÊ¹ÄÜ
	RCC_APB1PeriphClockCmd(RCC_APB2Periph_GPIOB , ENABLE);
	
	   //ÉèÖÃ¸ÃÒı½ÅÎª¸´ÓÃÊä³ö¹¦ÄÜ,Êä³öTIM1 CH1µÄPWMÂö³å²¨ĞÎ
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6; //TIM_CH1
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;  //¸´ÓÃÍÆÍìÊä³ö
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	
 //ÉèÖÃ¸ÃÒı½ÅÎª¸´ÓÃÊä³ö¹¦ÄÜ,Êä³öTIM1 CH1µÄPWMÂö³å²¨ĞÎ
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7; //TIM_CH1
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;  //¸´ÓÃÍÆÍìÊä³ö
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0; //TIM_CH1
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;  //¸´ÓÃÍÆÍìÊä³ö
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1; //TIM_CH1
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;  //¸´ÓÃÍÆÍìÊä³ö
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_InitStructure);
	
	
	TIM_TimeBaseStructure.TIM_Period = arr; //ÉèÖÃÔÚÏÂÒ»¸ö¸üĞÂÊÂ¼ş×°Èë»î¶¯µÄ×Ô¶¯ÖØ×°ÔØ¼Ä´æÆ÷ÖÜÆÚµÄÖµ	 80K
	TIM_TimeBaseStructure.TIM_Prescaler =psc; //ÉèÖÃÓÃÀ´×÷ÎªTIMxÊ±ÖÓÆµÂÊ³ıÊıµÄÔ¤·ÖÆµÖµ  ²»·ÖÆµ
	TIM_TimeBaseStructure.TIM_ClockDivision = 0; //ÉèÖÃÊ±ÖÓ·Ö¸î:TDTS = Tck_tim
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;  //TIMÏòÉÏ¼ÆÊıÄ£Ê½
	TIM_TimeBaseInit(TIM3, &TIM_TimeBaseStructure); ////¸ù¾İTIM_TimeBaseInitStructÖĞÖ¸¶¨µÄ²ÎÊı³õÊ¼»¯TIMxµÄÊ±¼ä»ùÊıµ¥Î» 
 
	TIM_OCInitStructure.TIM_OCMode = TIM_OCMode_PWM2; //Ñ¡Ôñ¶¨Ê±Æ÷Ä£Ê½:TIMÂö³å¿í¶Èµ÷ÖÆÄ£Ê½2
	TIM_OCInitStructure.TIM_OutputState = TIM_OutputState_Enable; //±È½ÏÊä³öÊ¹ÄÜ
	TIM_OCInitStructure.TIM_Pulse = 0; //ÉèÖÃ´ı×°Èë²¶»ñ±È½Ï¼Ä´æÆ÷µÄÂö³åÖµ
	TIM_OCInitStructure.TIM_OCPolarity = TIM_OCPolarity_Low; //Êä³ö¼«ĞÔ:TIMÊä³ö±È½Ï¼«ĞÔ¸ß
	
	TIM_OC1Init(TIM3, &TIM_OCInitStructure);
	TIM_OC2Init(TIM3, &TIM_OCInitStructure);
	TIM_OC3Init(TIM3, &TIM_OCInitStructure);  //¸ù¾İTIM_OCInitStructÖĞÖ¸¶¨µÄ²ÎÊı³õÊ¼»¯ÍâÉèTIMx
	TIM_OC4Init(TIM3, &TIM_OCInitStructure);
 
 
//	TIM_CtrlPWMOutputs(TIM3,ENABLE);	//MOE Ö÷Êä³öÊ¹ÄÜ	(TIM1TIM8²ÅĞèÒªÊ¹ÓÃ)
	TIM_OC1PreloadConfig(TIM3, TIM_OCPreload_Enable);
	TIM_OC2PreloadConfig(TIM3, TIM_OCPreload_Enable);
	TIM_OC3PreloadConfig(TIM3, TIM_OCPreload_Enable);  //CH1Ô¤×°ÔØÊ¹ÄÜ	
	TIM_OC4PreloadConfig(TIM3, TIM_OCPreload_Enable);  //CH1Ô¤×°ÔØÊ¹ÄÜ	
	
	
	TIM_CtrlPWMOutputs(TIM3,ENABLE);
	TIM_ARRPreloadConfig(TIM3, ENABLE); //Ê¹ÄÜTIMxÔÚARRÉÏµÄÔ¤×°ÔØ¼Ä´æÆ÷
	TIM_Cmd(TIM3, ENABLE);  //Ê¹ÄÜTIM1
}


void TIM1_PWM_Init(u16 arr,u16 psc)
{  
	GPIO_InitTypeDef GPIO_InitStructure;
	TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
	TIM_OCInitTypeDef  TIM_OCInitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1, ENABLE);//	
 	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB , ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB2Periph_GPIOB , ENABLE);  //Ê¹ÄÜGPIOÍâÉèÊ±ÖÓÊ¹ÄÜ
	
	   //ÉèÖÃ¸ÃÒı½ÅÎª¸´ÓÃÊä³ö¹¦ÄÜ,Êä³öTIM1 CH1µÄPWMÂö³å²¨ĞÎ
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13; //TIM_CH1
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;  //¸´ÓÃÍÆÍìÊä³ö
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_InitStructure);
	

	
	TIM_TimeBaseStructure.TIM_Period = arr; //ÉèÖÃÔÚÏÂÒ»¸ö¸üĞÂÊÂ¼ş×°Èë»î¶¯µÄ×Ô¶¯ÖØ×°ÔØ¼Ä´æÆ÷ÖÜÆÚµÄÖµ	 80K
	TIM_TimeBaseStructure.TIM_Prescaler =psc; //ÉèÖÃÓÃÀ´×÷ÎªTIMxÊ±ÖÓÆµÂÊ³ıÊıµÄÔ¤·ÖÆµÖµ  ²»·ÖÆµ
	TIM_TimeBaseStructure.TIM_ClockDivision = 0; //ÉèÖÃÊ±ÖÓ·Ö¸î:TDTS = Tck_tim
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;  //TIMÏòÉÏ¼ÆÊıÄ£Ê½
	TIM_TimeBaseInit(TIM1, &TIM_TimeBaseStructure); ////¸ù¾İTIM_TimeBaseInitStructÖĞÖ¸¶¨µÄ²ÎÊı³õÊ¼»¯TIMxµÄÊ±¼ä»ùÊıµ¥Î» 
 
	TIM_OCInitStructure.TIM_OCMode = TIM_OCMode_PWM2; //Ñ¡Ôñ¶¨Ê±Æ÷Ä£Ê½:TIMÂö³å¿í¶Èµ÷ÖÆÄ£Ê½2
	TIM_OCInitStructure.TIM_OutputState = TIM_OutputState_Disable; //±È½ÏÊä³öÊ¹ÄÜ
	TIM_OCInitStructure.TIM_OutputNState = TIM_OutputNState_Enable;
	TIM_OCInitStructure.TIM_Pulse = 0; //ÉèÖÃ´ı×°Èë²¶»ñ±È½Ï¼Ä´æÆ÷µÄÂö³åÖµ
	TIM_OCInitStructure.TIM_OCPolarity = TIM_OCPolarity_Low; //Êä³ö¼«ĞÔ:TIMÊä³ö±È½Ï¼«ĞÔ¸ß
	TIM_OCInitStructure.TIM_OCNPolarity = TIM_OCNPolarity_Low;
	TIM_OCInitStructure.TIM_OCNIdleState=TIM_OCNIdleState_Reset;
	TIM_OCInitStructure.TIM_OCIdleState=TIM_OCIdleState_Reset;
	TIM_OC1Init(TIM1, &TIM_OCInitStructure);  //¸ù¾İTIM_OCInitStructÖĞÖ¸¶¨µÄ²ÎÊı³õÊ¼»¯ÍâÉèTIMx
	
	TIM_CtrlPWMOutputs(TIM1,ENABLE);	//MOE Ö÷Êä³öÊ¹ÄÜ	(TIM1TIM8²ÅĞèÒªÊ¹ÓÃ)
	
	TIM_OC1PreloadConfig(TIM1, TIM_OCPreload_Enable);  //CH1Ô¤×°ÔØÊ¹ÄÜ	
		
	TIM_ARRPreloadConfig(TIM1, ENABLE); //Ê¹ÄÜTIMxÔÚARRÉÏµÄÔ¤×°ÔØ¼Ä´æÆ÷
	TIM_Cmd(TIM1, ENABLE);  //Ê¹ÄÜTIM1
	
}

void servo_init(void)
{
	TIM1_PWM_Init(1999,719);
	TIM3_PWM_Init(1999,719);
	TIM5_PWM_Init(1999,719);
}

void servo_angle1(uint16_t angle)   //PA6
{
  uint16_t pulse;
  
  //Õë¶Ô¶æ»ú¿É×ª½Ç¶ÈÏŞ·ø
  if(angle <= 5)
    angle = 5;
  if(angle >= 175)
    angle = 175;
  //½«½Ç¶ÈÖµ×ª»»ÎªÂö³åÖµ  
  pulse = (uint16_t)(50 + angle * 100/90.0);  //´Ë×ª»»¹«Ê½Ğè¸ù¾İpwmµÄarr¼°pscÅäÖÃÀ´×öÏàÓ¦±ä»¯
  TIM_SetCompare1(TIM3, pulse);
}
 

void servo_angle2(uint16_t angle)    //PA7
{
  uint16_t pulse;
  
  //Õë¶Ô¶æ»ú¿É×ª½Ç¶ÈÏŞ·ø
  if(angle <= 5)
    angle = 5;
  if(angle >= 175)
    angle = 175;
  //½«½Ç¶ÈÖµ×ª»»ÎªÂö³åÖµ  
  pulse = (uint16_t)(50 + angle * 100/90.0);  //´Ë×ª»»¹«Ê½Ğè¸ù¾İpwmµÄarr¼°pscÅäÖÃÀ´×öÏàÓ¦±ä»¯
  TIM_SetCompare2(TIM3, pulse);
}
 

void servo_angle3(uint16_t angle)   //PB0
{
  uint16_t pulse;
  
  //Õë¶Ô¶æ»ú¿É×ª½Ç¶ÈÏŞ·ø
  if(angle <= 5)
    angle = 5;
  if(angle >= 175)
    angle = 175;
  //½«½Ç¶ÈÖµ×ª»»ÎªÂö³åÖµ  
  pulse = (uint16_t)(50 + angle * 100/90.0);  //´Ë×ª»»¹«Ê½Ğè¸ù¾İpwmµÄarr¼°pscÅäÖÃÀ´×öÏàÓ¦±ä»¯
  TIM_SetCompare3(TIM3, pulse);
}
 

void servo_angle4(uint16_t angle)   //PB1
{
  uint16_t pulse;
  
  //Õë¶Ô¶æ»ú¿É×ª½Ç¶ÈÏŞ·ø
  if(angle <= 5)
    angle = 5;
  if(angle >= 175)
    angle = 175;
  //½«½Ç¶ÈÖµ×ª»»ÎªÂö³åÖµ  
  pulse = (uint16_t)(50 + angle * 100/90.0);  //´Ë×ª»»¹«Ê½Ğè¸ù¾İpwmµÄarr¼°pscÅäÖÃÀ´×öÏàÓ¦±ä»¯
  TIM_SetCompare4(TIM3, pulse);
}
 

void servo_angle5(uint16_t angle)   //PB13
{
  uint16_t pulse;
  
  //Õë¶Ô¶æ»ú¿É×ª½Ç¶ÈÏŞ·ø
  if(angle <= 5)
    angle = 5;
  if(angle >= 175)
    angle = 175;
  //½«½Ç¶ÈÖµ×ª»»ÎªÂö³åÖµ  
  pulse = (uint16_t)(50 + angle * 100/90.0);  //´Ë×ª»»¹«Ê½Ğè¸ù¾İpwmµÄarr¼°pscÅäÖÃÀ´×öÏàÓ¦±ä»¯
  TIM_SetCompare1(TIM1, pulse);
}
 
