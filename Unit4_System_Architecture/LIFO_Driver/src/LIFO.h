/*
 * LIFO.h
 *
 *  Created on: Sep 15, 2023
 *      Author: Access
 */

#ifndef LIFO_H_
#define LIFO_H_

#include "stdio.h"
typedef struct{
	unsigned int length;
	unsigned char* base;
	unsigned char* head;
	unsigned int count;
} LIFO_Buf_t;

typedef enum{
	LIFO_no_error,
	LIFO_full,
	LIFO_not_full,
	LIFO_empty,
	LIFO_not_empty,
	LIFO_Null
}Buffer_Status;

Buffer_Status LIFO_Add_Item(LIFO_Buf_t* lBuf, unsigned char item);
Buffer_Status LIFO_Pop_Item(LIFO_Buf_t* lBuf, unsigned char* item);
Buffer_Status LIFO_Is_Buf_Full(LIFO_Buf_t* lBuf);
Buffer_Status LIFO_Is_Buf_Empty(LIFO_Buf_t* lBuf);
Buffer_Status LIFO_Init(LIFO_Buf_t* lBuf,unsigned int* buf, int length);


#endif /* LIFO_H_ */
