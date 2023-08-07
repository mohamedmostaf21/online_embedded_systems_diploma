#include "uart.h"
unsigned char string_buffer[100] = "learn-in-depth:<Mohamed>";
int main(){
	Uart_Send_string(string_buffer);
	//Uart_Send_string(&string_buffer[0]);

	return 0;
}