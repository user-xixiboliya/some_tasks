#include "Usart3.h"
#include "LED.h"
#include "delay.h"
#include "dance.h"
#include "stm32f10x.h"
#include "jingzou.h"
//视觉  二维码  越障

#if EN_USART3_RX   //如果使能了接收
//串口3中断服务程序
//注意,读取USARTx->SR能避免莫名其妙的错误   	
u8 USART3_RX_BUF[USART3_REC_LEN];     //接收缓冲,最大USART_REC_LEN个字节.
//接收状态
//bit15，	接收完成标志
//bit14，	接收到0x0d
//bit13~0，	接收到的有效字节数目
u16 USART3_RX_STA=0;       //接收状态标记	  
extern u8 sj;
extern u8 i;
extern u8 b;
u8 cs;
void Uart3_init(u32 bound)
	{
  //GPIO端口设置
  GPIO_InitTypeDef GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	NVIC_InitTypeDef NVIC_InitStructure;
	 
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);	//使能 GPIOB 时钟
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART3, ENABLE);//使能 USART3 时钟
	
	USART_DeInit(USART3);  //复位串口3
	//USART3_TX   GPIOB.10
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10; //PB.10
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;	//复用推挽输出
  GPIO_Init(GPIOB, &GPIO_InitStructure);//初始化GPIOB.10
   
  //USART3_RX	  GPIOB.11初始化
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;//PB.11
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;//浮空输入
  GPIO_Init(GPIOB, &GPIO_InitStructure);//初始化GPIOB.11  

  //USART3 NVIC 配置
  NVIC_InitStructure.NVIC_IRQChannel = USART3_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority=0 ;//抢占优先级0
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;		//子优先级0
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;			//IRQ通道使能
	NVIC_Init(&NVIC_InitStructure);	//根据指定的参数初始化VIC寄存器
  
   //USART 初始化设置

	USART_InitStructure.USART_BaudRate = bound;//串口波特率
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;//字长为8位数据格式
	USART_InitStructure.USART_StopBits = USART_StopBits_1;//一个停止位
	USART_InitStructure.USART_Parity = USART_Parity_No;//无奇偶校验位
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;//无硬件数据流控制
	USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;	//收发模式

  USART_Init(USART3, &USART_InitStructure); //初始化串口3
  USART_ITConfig(USART3, USART_IT_RXNE, ENABLE);//开启串口接受中断
  USART_Cmd(USART3, ENABLE);                    //使能串口3 

}

u8 e=0;
u8 xiao=0;
u8 l=0;
void USART3_IRQHandler(void)                	//串口3中断服务程序(视觉模块)
{
		u8 Res;
	
	#if SYSTEM_SUPPORT_OS 		//如果SYSTEM_SUPPORT_OS为真，则需要支持OS.
	OSIntEnter();    
#endif
	
		if(USART_GetITStatus(USART3, USART_IT_RXNE) != RESET)  //接收中断
		{
//			USART_ClearITPendingBit(USART3,USART_IT_RXNE);
		  Res=USART_ReceiveData(USART3);	//读取接收到的数据
			USART_SendData(UART4,Res);//回传接收到的数据			
			while(USART_GetFlagStatus(USART3,USART_FLAG_TC)!=SET);//等待发送完毕
			delay_ms(10);
			if(Res=='1'&&e==1)
			{
				yuandiyouxiao();
				yuezhang2();
				USART_SendData(UART4,Res);
				qibu();
				e=0;
			}
			else if(Res=='2'&&e==1)
			{
				yuandiyouxiao();
				yuandiyouxiao();
				yuezhang2();
				USART_SendData(UART4,Res);
				qibu();
				e=0;
			}
			else if(Res=='3'&&e==1)
			{
				yuandiyouxiao();
				yuandiyouxiao();
				yuandiyouxiao();
				yuezhang2();
				USART_SendData(UART4,Res);
				qibu();
				e=0;
			}
			if(Res=='5')//越障
			{	
				guizhong2();
				//yuezhang();
				guizhong();
				//zoulu();
				USART_SendData(UART4,Res);
				e=1;
				xiao=1;
				for(l=0;l<7;l++)
				{
					ceshizuo();
				}
			}
			else if(Res=='6'&&e==1)
			{
				yuandizuoxiao();
				yuezhang2();
				USART_SendData(UART4,Res);
				qibu();
				e=0;
			}
			else if(Res=='7'&&e==1)
			{
				yuandizuoxiao();
				yuandizuoxiao();
				yuezhang2();
				USART_SendData(UART4,Res);
				qibu();
				e=0;
			}
			else if(Res=='8'&&e==1)
			{
				yuandizuoxiao();
				yuandizuoxiao();
				yuandizuoxiao();
				yuezhang2();
				USART_SendData(UART4,Res);
				qibu();
				e=0;
			}
			
			//二维码
			else if(Res=='A')
			{	
				guizhong2();
				guizhong();
				USART_SendData(UART4,'A');
				delay_ms(800);
				qibu();
			}
			else if(Res=='B')
			{	
				guizhong2();
				guizhong();
				USART_SendData(UART4,'B');
				delay_ms(800);
				qibu();
			}
			else if(Res=='C')
			{	
				guizhong2();
				guizhong();
				USART_SendData(UART4,'C');
				delay_ms(800);
				qibu();
			}
			else if(Res=='D')
			{	
				guizhong2();
				guizhong();
				USART_SendData(UART4,'D');
				delay_ms(800);
				qibu();
			}
			else if(Res=='E')
			{	
				guizhong2();
				guizhong();
				USART_SendData(UART4,'E');
				delay_ms(800);
				qibu();
			}
			else if(Res=='F')
			{	
				guizhong2();
				guizhong();
				USART_SendData(UART4,'F');
				delay_ms(800);
				qibu();
			}
			else if(Res=='G')
			{	
				guizhong2();
				guizhong();
				USART_SendData(UART4,'G');
				delay_ms(800);
				qibu();
				//zoulu();
			}
			else if(Res=='H')
			{	
				guizhong2();
				guizhong();
				USART_SendData(UART4,'H');
				delay_ms(800);
				qibu();
				//zoulu();
			}
		  b=1;
     }
}

/*
void Uart3_Printf(const char *buf)
{
	u8 len = strlen(buf);
	while (len--) {
		while ((USART3->SR & 0x40) == 0);//TC位为0则数据还没有发完
		USART_SendData(USART3,*buf++);
	}
}

void USART3_Send_Byte(uint16_t Data)
{ 
          USART_SendData(USART3,Data);
          while(USART_GetFlagStatus(USART3, USART_FLAG_TC) == RESET);	 //数据没有发完在此停滞
}
*/
//void Usart3_Send_CC(uint16_t numb)
//{
//    USART3_Send_Byte(0xAA);
//	  USART3_Send_Byte(0xFD);
//	  USART3_Send_Byte(numb);
//	  USART3_Send_Byte(0x00);
//	  USART3_Send_Byte(0xDF);

//}



#endif	
