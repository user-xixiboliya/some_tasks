#include "sys.h"
#include "Bluetooth.h"	
#include "led.h"
#include "delay.h"
#include "dance.h"
#include "jingzou.h"
//视觉  走路


//////////////////////////////////////////////////////////////////
//加入以下代码,支持printf函数,而不需要选择use MicroLIB	  
#if 1
#pragma import(__use_no_semihosting)             
//标准库需要的支持函数    
extern u8 bt;
extern u8 i;
extern u8 j;
extern u8 a;
struct __FILE 
{ 
	int handle; 

}; 

FILE __stdout;       
//定义_sys_exit()以避免使用半主机模式    
_sys_exit(int x) 
{ 
	x = x; 
} 
//重定义fputc函数 
int fputc1(int ch, FILE *f)
{      
	while((USART1->SR&0X40)==0);//循环发送,直到发送完毕   
    USART1->DR = (u8) ch;      
	return ch;
}
#endif 

/*使用microLib的方法*/
 /* 
int fputc(int ch, FILE *f)
{
	USART_SendData(USART1, (uint8_t) ch);

	while (USART_GetFlagStatus(USART1, USART_FLAG_TC) == RESET) {}	
   
    return ch;
}
int GetKey (void)  { 

    while (!(USART1->SR & USART_FLAG_RXNE));

    return ((int)(USART1->DR & 0x1FF));
}
*/
 
#if EN_USART1_RX   //如果使能了接收
//串口1中断服务程序
//注意,读取USARTx->SR能避免莫名其妙的错误   	
u8 USART_RX_BUF[USART_REC_LEN];     //接收缓冲,最大USART_REC_LEN个字节.
//接收状态
//bit15，	接收完成标志
//bit14，	接收到0x0d
//bit13~0，	接收到的有效字节数目
u16 USART_RX_STA=0;       //接收状态标记	  
  
void bluetooth_init(u32 bound){
  //GPIO端口设置
  GPIO_InitTypeDef GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	NVIC_InitTypeDef NVIC_InitStructure;
	 
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1|RCC_APB2Periph_GPIOA, ENABLE);	//使能USART1，GPIOA时钟
  
	//USART1_TX   GPIOA.9
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9; //PA.9
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;	//复用推挽输出
  GPIO_Init(GPIOA, &GPIO_InitStructure);//初始化GPIOA.9
   
  //USART1_RX	  GPIOA.10初始化
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;//PA10
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;//浮空输入
  GPIO_Init(GPIOA, &GPIO_InitStructure);//初始化GPIOA.10  

  //Usart1 NVIC 配置
  NVIC_InitStructure.NVIC_IRQChannel = USART1_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority=3;//抢占优先级3
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;		//子优先级3
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;			//IRQ通道使能
	NVIC_Init(&NVIC_InitStructure);	//根据指定的参数初始化VIC寄存器
  
   //USART 初始化设置

	USART_InitStructure.USART_BaudRate = bound;//串口波特率
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;//字长为8位数据格式
	USART_InitStructure.USART_StopBits = USART_StopBits_1;//一个停止位
	USART_InitStructure.USART_Parity = USART_Parity_No;//无奇偶校验位
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;//无硬件数据流控制
	USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;	//收发模式

  USART_Init(USART1, &USART_InitStructure); //初始化串口1
  USART_ITConfig(USART1, USART_IT_RXNE, ENABLE);//开启串口接受中断
  USART_Cmd(USART1, ENABLE);                    //使能串口1 

}
  
u8 b=0;  //U3结束
void USART1_IRQHandler(void)                	//串口1中断服务程序
	{
	  u8 Res;
		
	if(USART_GetITStatus(USART1, USART_IT_RXNE) != RESET)  //接收中断
		{
			USART_ClearITPendingBit(USART1,USART_IT_RXNE);
		  Res=USART_ReceiveData(USART1);	//读取接收到的数据
			USART_SendData(USART1,Res);//回传接收到的数据			
			while(USART_GetFlagStatus(USART1,USART_FLAG_TC)!=SET);//等待发送完毕
			delay_ms(10);
			//
			if(Res=='1')
			{
				zoulu();
			}
			else if(Res=='2')//左转
			{
				zuozhuan();
				USART_SendData(UART4,Res);
			}
			else if(Res=='3')//右转
			{
				youzhuan();
				USART_SendData(UART4,Res);
			}
//			else if(Res=='4')//跨越
//			{	
//				yuezhang2();
//				USART_SendData(UART4,Res);
//			}
//			else if(Res=='5'/*&&i==0&&k==1*/)  //往前一步
//			{	
//				one_step_stright();
//				USART_SendData(UART4,Res);
//			}
//			else if(Res=='6')  //右转
//			{	
//			//		yuezhang();
//			}
//			else if(Res=='7'/*&&i==0&&k==1*/)  //右转
//			{	
//					guizhong();
//			}
//			else if(Res=='8'/*&&i==0&&k==1&&f==1*/)  //右转
//			{	
//				zuozhuan();
//				USART_SendData(UART4,Res);
//			}
//			else if(Res=='9'/*&&i==0&&k==1&&f==1*/)  //右转
//			{	
//				youzhuan();
//				USART_SendData(UART4,Res);
//			}
//			else if(Res=='0'/*&&i==0&&k==1&&f==0*/)  //右转
//			{	
//				guizhong3();
//				yuandizuo2();
//				qibu();
//				USART_SendData(UART4,Res);
//			}
//			else if(Res=='7'/*&&i==0&&k==1&&f==0*/)  //右转
//			{	
//				guizhong3();
//				yuandiyou();
//				qibu();
//				USART_SendData(UART4,Res);
//			}
//			else if(Res=='8'/*&&i==0&&k==1*/)//直道左转
//			{	
//				zuozhuanzhi();
//				//yuandizuo2();
//				USART_SendData(UART4,Res);
//				//f=1;
//			}
//			else if(Res=='9'/*&&i==0&&k==1*/)//直道右转
//			{	
//				youzhuanzhi();
//				//yuandiyou();
//				USART_SendData(UART4,Res);
//				//f=1;
//			}

			USART_RX_STA=0;
		
     }
} 
#endif	

