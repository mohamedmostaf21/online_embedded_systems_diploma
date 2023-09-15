/*
 ============================================================================
 Name        : LIFO_Driver.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "LIFO.h"
unsigned int buffer1[5];
int main(void) {
	unsigned char i, temp;
	LIFO_Buf_t first_buffer, second_buffer;
	//-----------------------------------------
	//Dynamically
	//set base pointer
	unsigned int* buffer2 = (unsigned int*)malloc(5 *sizeof(unsigned int));

	LIFO_Init(&first_buffer,buffer2,5);
	printf("\n First Buffer (Dynamic allocation) LIFO_push_item = ");
	for(i = 0; i < 5; i++){
		printf(" %d,", i);
		LIFO_Add_Item(&first_buffer, i);
	}

	printf("\n first_buffer (Dynamic allocation) LIFO_pop_item = ");
	for(i = 0; i < 5; i++){
		LIFO_Pop_Item(&first_buffer, &temp);
		printf(" %d,", temp);
	}
	//-------------------or---------------------------------------------
	//Statically

	LIFO_Init(&second_buffer,buffer1,5);

	printf("\n second_buffer (Static allocation) LIFO_push_item = ");
		for(i = 0; i < 5; i++){
			printf(" %d,", i);
			LIFO_Add_Item(&second_buffer, i);
		}

		printf("\n second_buffer (Static allocation) LIFO_pop_item = ");
		for(i = 0; i < 5; i++){
			LIFO_Pop_Item(&second_buffer, &temp);
			printf(" %d,", temp);
		}
	return 0;
}
