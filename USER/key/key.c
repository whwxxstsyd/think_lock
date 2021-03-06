#include "stm32f10x.h"
#include "key/key.h"
#include "delay/delay.h"
#include "usart1/usart1.h"



uint16_t Key_Count=0;		//按键按下之后计时
char  Key_Status=0;  //按键默认为弹起状态�
//KEY   GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_2)//读取按键0
//按键初始化函数
void KEY_Init(void)
{ 
 	GPIO_InitTypeDef GPIO_InitStructure;
 
 	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);//使能PORTA时钟
		
	GPIO_InitStructure.GPIO_Pin  = GPIO_Pin_2;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_10MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; //设置成上拉输入
 	GPIO_Init(GPIOA, &GPIO_InitStructure);//初始化GPIOA0
	
}

void KEY_Scan(void)
{		
	 if(KEY==ON)                         //按键被按下，则进入按键计时
	 {
		 Key_Status=1;		 
	 }
   if (KEY==OFF)                       //如果按键没有按下或者按键弹起了，则进入初始化状态           
	 {
		 Key_Count=0;
		 Key_Status=0;
	 }		 
}
