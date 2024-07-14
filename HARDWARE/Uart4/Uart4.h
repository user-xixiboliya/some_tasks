#ifndef __USART3_H
#define __USART3_H
#include "stdio.h"
#include "string.h"	
#include "sys.h" 
#include "LED.h"

#define USART4_REC_LEN  			200  	//定义最大接收字节数 200
//#define EN_USART4_RX 			1		//使能（1）/禁止（0）串口1接收
	  	
extern u8  USART4_RX_BUF[USART4_REC_LEN]; //接收缓冲,最大USART_REC_LEN个字节.末字节为换行符 
extern u16 USART4_RX_STA;         		//接收状态标记	
extern u8 Res;
void Uart4_init(u32 bound);
void Uart4_Printf(const char *buf);
void USART4_IRQHandler(void) ;
void USART4_Send_Byte(uint8_t Data);


#endif
