#ifndef __PWM_H
#define __PWM_H
#include "sys.h"



void TIM1_PWM_Init(u16 arr,u16 psc);
void TIM3_PWM_Init(u16 arr,u16 psc);
void TIM5_PWM_Init(u16 arr,u16 psc);

void servo_init(void);

void servo_angle1(uint16_t angle);
void servo_angle2(uint16_t angle);
void servo_angle3(uint16_t angle);
void servo_angle4(uint16_t angle);
void servo_angle5(uint16_t angle);


#endif
