/*
 ============================================================================
 Name        : FIFO_Driver.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "FIFO.h"
#define buffer1_length 5
element_type buffer1[buffer1_length];
int main(void) {
	FIFO_Buf_t uart_fifo;
	unsigned char i, temp = 0;
	if(FIFO_Init(&uart_fifo, buffer1, buffer1_length) == FIFO_no_error)
		printf("FIFO_Init --- Done \n");
	for(i = 0; i < 7; i++){
		printf("FIFO Enqueue (%X) \n",i);
		if(FIFO_enqueue(&uart_fifo, &i) == FIFO_no_error)
			printf("FIFO Enqueue (%X) --- Done \n", i);
		else
			printf("FIFO Enqueue (%X) --- Failed \n", i);
	}
	FIFO_Print(&uart_fifo);
	FIFO_dequeue(&uart_fifo, &temp);
	printf("FIFO Dequeue Data=%X \n",temp);
	FIFO_dequeue(&uart_fifo, &temp);
	printf("FIFO Dequeue Data=%X \n",temp);
	for(i = 0; i < 2; i++){
		printf("FIFO Enqueue (%X) \n",i);
		if(FIFO_enqueue(&uart_fifo, &i) == FIFO_no_error)
			printf("FIFO Enqueue (%X) --- Done \n", i);
		else
			printf("FIFO Enqueue (%X) --- Failed \n", i);
	}
	FIFO_Print(&uart_fifo);
	return 0;
}
