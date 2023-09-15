/*
 * FIFO.c
 *
 *  Created on: 15 Sept 2023
 *      Author: Access
 */
#include "FIFO.h"
E_Buffer_Status FIFO_Init(FIFO_Buf_t* fifo, element_type* buf, uint32_t buf_length){
	if(buf == NULL)
		return FIFO_null;
	fifo->base = buf;
	fifo->head = fifo->base;
	fifo->tail = fifo->base;
	fifo->length = buf_length;
	fifo->count = 0;

	return FIFO_no_error;
}
E_Buffer_Status FIFO_Is_Buf_Empty(FIFO_Buf_t* fifo){
	//check if fifo is exist
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_null;
	if(fifo->count == 0){
		printf("FIFO is empty\n");
		return FIFO_empty;
	}
	return FIFO_no_error;

}
E_Buffer_Status FIFO_Is_Buf_Full(FIFO_Buf_t* fifo){
	//check if fifo is exist
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_null;
	if(fifo->count >= fifo->length){
		printf("FIFO is full\n");
		return FIFO_full;
	}
	return FIFO_no_error;
}
E_Buffer_Status FIFO_enqueue(FIFO_Buf_t* fifo, element_type* ENQ_Data){
	if(FIFO_Is_Buf_Full(fifo)== FIFO_no_error){
		*(fifo->head) = *ENQ_Data;
		fifo->count++;
		//circler fifo
		if(fifo->head == (fifo->base + (fifo->length * sizeof(element_type))) )
			fifo->head = fifo->base;
		else
			fifo->head++;
		return FIFO_no_error;
	}else{
		printf("FIFO ENQUEUE FAILED\n");
		return(FIFO_Is_Buf_Full(fifo));
	}
}

E_Buffer_Status FIFO_dequeue(FIFO_Buf_t* fifo, element_type* DEQ_Data){
	if(FIFO_Is_Buf_Empty(fifo) == FIFO_no_error){
		*DEQ_Data = *(fifo->tail);
		fifo->count--;
		//circler fifo
		if(fifo->tail == (fifo->base + (fifo->length * sizeof(element_type))) )
			fifo->tail = fifo->base;
		else
			fifo->tail++;
		return FIFO_no_error;
	}else{
		printf("FIFO DEQUEUE FAILED\n");
		return(FIFO_Is_Buf_Empty(fifo));
	}
}
void FIFO_Print(FIFO_Buf_t* fifo){
	element_type* temp;
	int i;
	if(FIFO_Is_Buf_Empty(fifo) == FIFO_no_error){
		temp = fifo->tail;
		printf("\n ============ FIFO_print ============ \n");
		for(i = 0; i < fifo->count; i++){
			printf("\t %X \n",*temp);
			temp++;
		}
		printf("\n ======================================= \n");
	}
}
