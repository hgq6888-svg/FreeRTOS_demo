#include "stm32f4xx.h"
#include "usart.h"
#include "delay.h"

int main(void)
{
		// 1. 初始化延时函数
		// F407的主频通常配置为168MHz，告诉delay函数当前主频
		delay_init(168); 

		// 2. 初始化串口1
		// 波特率设置为 115200，用来和电脑通信
		uart_init(115200);

		// 打印开机信息
		printf("\r\n===================================\r\n");
		printf("智能图书馆系统 - 裸机复刻版启动\r\n");
		printf("核心芯片: STM32F407ZG\r\n");
		printf("系统时钟: 168 MHz\r\n");
		printf("===================================\r\n");

		while(1)
		{
				// 模拟系统“心跳”
				printf("System Heartbeat: Run OK...\r\n");
				
				// 延时1000毫秒（1秒）
				delay_ms(1000); 
		}
}




