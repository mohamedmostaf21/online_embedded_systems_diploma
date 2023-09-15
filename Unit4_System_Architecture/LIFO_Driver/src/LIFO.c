

#include "LIFO.h"

Buffer_Status LIFO_Init(LIFO_Buf_t* lBuf,unsigned int* buf, int length){
	if(lBuf == NULL)
		return LIFO_Null;

	//set length
	lBuf->length = length;
	//set base pointer
	lBuf->base = buf;
	//set head pointer
	lBuf->head = buf;
	//set current count
	lBuf->count = 0;
	return LIFO_no_error;

}
Buffer_Status LIFO_Is_Buf_Full(LIFO_Buf_t* lBuf){
	//check if the pointer is valid
	if(!lBuf || !lBuf->base || !lBuf->head)
		return LIFO_Null;
	if(lBuf->head >= (lBuf->base+lBuf->length))
		return LIFO_full;
	else
		return LIFO_not_full;

}
Buffer_Status LIFO_Is_Buf_Empty(LIFO_Buf_t* lBuf){
	//check if the pointer is valid
	if(!lBuf || !lBuf->base || !lBuf->head)
		return LIFO_Null;
	if(lBuf->base == lBuf->head)
		return LIFO_empty;
	else
		return LIFO_not_empty;

}
Buffer_Status LIFO_Add_Item(LIFO_Buf_t* lBuf, unsigned char item){
	//check if the pointer is valid
	if(!lBuf || !lBuf->base || !lBuf->head)
		return LIFO_Null;
	//check if buffer is full
	if(LIFO_Is_Buf_Full(lBuf) == LIFO_full)
		return LIFO_full;
	*(lBuf->head) = item;
	lBuf->head++;
	lBuf->count++;

	return LIFO_no_error;
}

Buffer_Status LIFO_Pop_Item(LIFO_Buf_t* lBuf, unsigned char* item){
	//check if the pointer is valid
	if(!lBuf || !lBuf->base || !lBuf->head)
		return LIFO_Null;
	//check if buffer is empty
	if(LIFO_Is_Buf_Empty(lBuf) == LIFO_empty)
		return LIFO_empty;

	lBuf->head--;
	*item = *(lBuf->head);
	lBuf->count--;

	return LIFO_no_error;
}
