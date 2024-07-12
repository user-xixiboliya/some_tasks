#ifndef __USART3_H
#define __USART3_H
#include "stdio.h"
#include "string.h"	
#include "sys.h" 
#include "LED.h"

#define USART3_REC_LEN  			200  	//定义最大接收字节数 200
#define EN_USART3_RX 			1		//使能（1）/禁止（0）串口1接收
	  	
extern u8  USART3_RX_BUF[USART3_REC_LEN]; //接收缓冲,最大USART_REC_LEN个字节.末字节为换行符 
extern u16 USART3_RX_STA;         		//接收状态标记	

void Uart3_init(u32 bound);
void Uart3_Printf(const char *buf);
void Usart3_Send_CC(uint16_t numb);
void USART3_IRQHandler(void) ;


#endif
