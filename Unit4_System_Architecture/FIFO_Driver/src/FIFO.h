/*
 * FIFO.h
 *
 *  Created on: 15 Sept 2023
 *      Author: Access
 */

#ifndef FIFO_H_
#define FIFO_H_
#include "stdio.h"
#include "stdint.h"
#define element_type uint8_t
typedef struct{
	unsigned int length;
	element_type* base;
	element_type* head;
	element_type* tail;
	unsigned int count;
}FIFO_Buf_t;

typedef enum{
	FIFO_no_error,
	FIFO_empty,
	FIFO_full,
	FIFO_null
}E_Buffer_Status;
//FIFO APIs============
E_Buffer_Status FIFO_enqueue(FIFO_Buf_t* fifo, element_type* ENQ_Data);
E_Buffer_Status FIFO_dequeue(FIFO_Buf_t* fifo, element_type* DEQ_Data);
E_Buffer_Status FIFO_Is_Buf_Full(FIFO_Buf_t* fifo);
E_Buffer_Status FIFO_Is_Buf_Empty(FIFO_Buf_t* fifo);
void FIFO_Print(FIFO_Buf_t* fifo);
E_Buffer_Status FIFO_Init(FIFO_Buf_t* fifo, element_type* buf, uint32_t buf_length);


#endif /* FIFO_H_ */
