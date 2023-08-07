#include "uart.h"
#define UART0DR *((volatile unsigned int* const)((unsigned int*)0x101f1000))
void Uart_Send_string(unsigned char *px_tx_string)
{
	while(*px_tx_string != '\0'){
		UART0DR = (unsigned int)(*px_tx_string);
		px_tx_string++; //next char
	}
}