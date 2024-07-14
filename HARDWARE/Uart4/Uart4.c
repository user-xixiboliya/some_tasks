#include "Uart4.h"
#include "LED.h"
#include "delay.h"
#include "dance.h"
#include "stm32f10x.h"
#include "jingzou.h"
#include "Usart3.h"
//蓝牙


//#endif EN_USART4_RX
//#if EN_USART4_RX   //如果使能了接收
extern u8 i;
extern u8 a;
//注意,读取USARTx->SR能避免莫名其妙的错误   	
u8 USART4_RX_BUF[USART4_REC_LEN];     //接收缓冲,最大USART_REC_LEN个字节.
//接收状态
//bit15，	接收完成标志
//bit14，	接收到0x0d
//bit13~0，	接收到的有效字节数目
u16 USART4_RX_STA=0;       //接收状态标记	  
extern u8 sj;
u8 Res;
void Uart4_init(u32 bound)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	NVIC_InitTypeDef  NVIC_InitStructure;
	
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_UART4, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC|RCC_APB2Periph_AFIO, ENABLE);
	
	USART_DeInit(UART4);  //复位串口4
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_Init(GPIOC, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_Init(GPIOC, &GPIO_InitStructure);
	
	USART_InitStructure.USART_BaudRate = bound;
	USART_InitStructure.USART_WordLength =USART_WordLength_8b;//???8?
	USART_InitStructure.USART_StopBits =USART_StopBits_1;//???1?
	USART_InitStructure.USART_Parity = USART_Parity_No;//??????
	USART_InitStructure.USART_HardwareFlowControl= USART_HardwareFlowControl_None;//???????
	USART_InitStructure.USART_Mode =USART_Mode_Rx | USART_Mode_Tx;//TX?RX???
	
	USART_Init(UART4, &USART_InitStructure); //初始化串口4
	USART_ITConfig(UART4, USART_IT_RXNE, ENABLE);
	USART_Cmd(UART4, ENABLE);
	USART_ClearFlag(UART4,USART_FLAG_TC);
	
	//Usart4 NVIC 配置
  NVIC_InitStructure.NVIC_IRQChannel = UART4_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority=3 ;//抢占优先级3
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;		//子优先级3
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;			//IRQ通道使能
	NVIC_Init(&NVIC_InitStructure);	//根据指定的参数初始化VIC寄存器
}
void UART4_IRQHandler(void)                	//串口4中断服务程序
	{
		if(USART_GetITStatus(UART4, USART_IT_RXNE) != RESET)  //接收中断
		{
			u8 Res1; 
			//USART_ClearITPendingBit(UART4,USART_IT_RXNE);
			Res1 = USART_ReceiveData(UART4);	//读取接收到的数据
			USART_SendData(UART4,Res);
		  //while(USART_GetFlagStatus(USART1,USART_FLAG_TC)!=SET);//等待发送完毕
			//delay_ms(100);
			Res = Res1;
		}
//		if(Res=='1')
//			{
//				zoulu();
//				//USART_SendData(UART4,Res);
//			}
//			else if(Res=='2')//左转
//			{	
//				zuozhuan();
//				//USART_SendData(UART4,Res);
//			}
//			else if(Res=='3')  //右转
//			{	
//				youzhuan();
//				//USART_SendData(UART4,Res);
//			}
//			else if(Res=='4')//二维码
//			{	
//				gostraight_while_slightly_turn_left();
//				USART_SendData(UART4,Res);
//			}
//			else if(Res=='5')//越障
//			{	
//				yuezhang2();
//				guizhong();
//				qibu2();
//				USART_SendData(UART4,Res);
//			}
//			else if(Res=='6')//原地左转
//			{	
//				yuandizuo2();
//				qibu2();
//				USART_SendData(UART4,Res);
//			}
//			else if(Res=='7')//原地右转
//			{	
//				yuandiyou();
//				qibu2();
//				USART_SendData(UART4,Res);
//			}
//			else if(Res=='8')//直道左转
//			{	
//				zuozhuanzhi();
//				//yuandizuo2();
//				USART_SendData(UART4,Res);
//				//f=1;
//			}
//			else if(Res=='9')//直道右转
//			{	
//        //youzhuanzhi();
//				//yuandiyou();
//				USART_SendData(UART4,Res);
//				ceshi();
//				//f=1;
//			}
			//a=0;
	}
	
	void USART4_Send_Byte(uint8_t Data)
{ 
          USART_SendData(UART4,Data);
          while(USART_GetFlagStatus(UART4, USART_FLAG_TC) == RESET);	 //等待发送结束
}

	
