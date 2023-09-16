/*
 * Linked_List.c
 *
 *  Created on: 15 Sept 2023
 *      Author: Access
 */

#include "Linked_List.h"
struct SStudent* gpFirstStudent = NULL;

void fill_the_record(struct SStudent* new_student){
	char temp_text[40];
	//Enter ID
	DPRINTF("\n Enter The ID : ");
	gets(temp_text);
	new_student->Student.ID = atoi(temp_text);
	//Enter Full Name
	DPRINTF("\n Enter Student Full Name : ");
	gets(new_student->Student.name);
	//Enter Height
	DPRINTF("\n Enter Height : ");
	gets(temp_text);
	new_student->Student.height = atof(temp_text);
}

void Add_Student(){
	struct SStudent* pLastStudent;
	struct SStudent* pNewStudent;
	if(gpFirstStudent == NULL){
		//create the first record
		pNewStudent = (struct SStudent*)malloc(sizeof(struct SStudent));
		//Assign gpFirstStuent to it
		gpFirstStudent = pNewStudent;
	}else{ //if the list contains records
		//navigate until reach the last record
		pLastStudent = gpFirstStudent;
		while(pLastStudent->PNextStudent)
			pLastStudent = pLastStudent->PNextStudent;
		//create new record and assign pnext to it
		pNewStudent = (struct SStudent*)malloc(sizeof(struct SStudent));
		pLastStudent->PNextStudent = pNewStudent;
	}
	//fill the new record
	fill_the_record(pNewStudent);
	//set the next record to null
	pNewStudent->PNextStudent = NULL;
}
int Delete_Student(){
	char temp_text[40];
	int selected_id;
	//get selected id from User
	DPRINTF("\n Enter Student ID to be deleted : ");
	gets(temp_text);
	selected_id = atoi(temp_text);
	if(gpFirstStudent){ //list have records
		struct SStudent* pPreviousStudent = NULL;
		struct SStudent* pSelectedStudent = gpFirstStudent;
		//loop on all records starting from gpFirstStudent
		while(pSelectedStudent){
			//compare the record ID with the selected ID
			if(pSelectedStudent->Student.ID == selected_id){
				if(pPreviousStudent){
					pPreviousStudent->PNextStudent = pSelectedStudent->PNextStudent;
				}else{
					gpFirstStudent  = pSelectedStudent->PNextStudent;
				}
				free(pSelectedStudent);
				return 1; //find it
			}
			//store previous record pointer
			pPreviousStudent = pSelectedStudent;
			pSelectedStudent = pPreviousStudent->PNextStudent;
		}
	}
	DPRINTF("\n cannot find student ID ");
	return 0; //cannot find it

}
void View_Students(){
	int count = 0;
	struct SStudent* pCurrentStudent = gpFirstStudent;
	if(gpFirstStudent == NULL)
		DPRINTF("\n Empty list");
	while(pCurrentStudent){
		DPRINTF("\n Record Number %d", count+1);
		DPRINTF("\n ID: %d", pCurrentStudent->Student.ID);
		DPRINTF("\n Name: %s", pCurrentStudent->Student.name);
		DPRINTF("\n Height: %f", pCurrentStudent->Student.height);
		pCurrentStudent = pCurrentStudent->PNextStudent;
		count++;
	}
}
void Delete_All(){
	struct SStudent* pCurrentStudent = gpFirstStudent;
	if(gpFirstStudent == NULL)
		DPRINTF("\n Empty list");
	while(pCurrentStudent){
		struct SStudent* pTempStudent = pCurrentStudent;
		pCurrentStudent = pCurrentStudent->PNextStudent;
		free(pTempStudent);
	}
	gpFirstStudent = NULL;
}
void Get_Nth(){
	struct SStudent* pCurrentStudent = gpFirstStudent;
	if(gpFirstStudent == NULL)
		DPRINTF("\n Empty list");

	char temp_text[40];
	int selected_index;
	//get selected index from User
	DPRINTF("\n Enter the selected index : ");
	gets(temp_text);
	selected_index = atoi(temp_text);
	int count = 0;
	while(pCurrentStudent){
			if(count == selected_index)
				DPRINTF("\n Student Data:\n ID : %d \n Name : %s \n Height : %f",pCurrentStudent->Student.ID,pCurrentStudent->Student.name,pCurrentStudent->Student.height);
			count++;
			pCurrentStudent = pCurrentStudent->PNextStudent;
	}
}
int Get_Length_Iterative(){
	int count = 0;
	struct SStudent* pCurrentStudent = gpFirstStudent;
	while(pCurrentStudent){
		pCurrentStudent = pCurrentStudent->PNextStudent;
		count++;
	}
	return count;
}
int Get_Length_Recursive(struct SStudent* pHeadStudent){
	if(pHeadStudent == NULL)
		return 0;
	else
		return Get_Length_Recursive(pHeadStudent->PNextStudent) + 1;
}
void Show_Length_Iterative(){
	DPRINTF("\n Length of list Iterative: %d ",Get_Length_Iterative());
}
void Show_Length_Recursive(){
	DPRINTF("\n Length of list Recursive: %d ",Get_Length_Recursive(gpFirstStudent));
}
void Get_Nth_From_End(){
	struct SStudent* main_Ptr = gpFirstStudent;
	struct SStudent* ref_Ptr = gpFirstStudent;
	if(gpFirstStudent == NULL)
			DPRINTF("\n Empty list");

	char temp_text[40];
	int selected_index;
	//get selected index from User
	DPRINTF("\n Enter the selected index from end : ");
	gets(temp_text);
	selected_index = atoi(temp_text);
	while(selected_index--){
		ref_Ptr = ref_Ptr->PNextStudent;
	}
	while(ref_Ptr){
		main_Ptr = main_Ptr->PNextStudent;
		ref_Ptr = ref_Ptr->PNextStudent;
	}
	DPRINTF("\n Student Data:\n ID : %d \n Name : %s \n Height : %f",main_Ptr->Student.ID,main_Ptr->Student.name,main_Ptr->Student.height);
}
void Get_Middle_Of_List(){
	struct SStudent* slow_Ptr = gpFirstStudent;
	struct SStudent* fast_Ptr = gpFirstStudent;
	if(gpFirstStudent == NULL){
		DPRINTF("\n Empty list");
	}else{
		while(fast_Ptr->PNextStudent){
			fast_Ptr = fast_Ptr->PNextStudent;
			slow_Ptr = slow_Ptr->PNextStudent;
			if(fast_Ptr->PNextStudent)
				fast_Ptr = fast_Ptr->PNextStudent;
		}
		DPRINTF("\n Student Data:\n ID : %d \n Name : %s \n Height : %f",slow_Ptr->Student.ID,slow_Ptr->Student.name,slow_Ptr->Student.height);
	}
}
int Detect_Loop(){
	struct SStudent* slow_Ptr = gpFirstStudent;
	struct SStudent* fast_Ptr = gpFirstStudent;
	while(slow_Ptr && fast_Ptr && fast_Ptr->PNextStudent){
		slow_Ptr = slow_Ptr->PNextStudent;
		fast_Ptr = fast_Ptr->PNextStudent->PNextStudent;
		if(slow_Ptr == fast_Ptr){
			DPRINTF("\n Found Loop");
			return 1;
		}
	}
	return 0;
}
void Reverse_List(){
	struct SStudent* pPreviousStudent = NULL;
	struct SStudent* pCurrentStudent = gpFirstStudent;
	struct SStudent* pNextStudent = NULL;
	while(pCurrentStudent != NULL){
		 // Store next
		pNextStudent = pCurrentStudent->PNextStudent;
		// Reverse current node's pointer
		pCurrentStudent->PNextStudent = pPreviousStudent;
		 // Move pointers one position ahead.
		pPreviousStudent = pCurrentStudent;
		pCurrentStudent = pNextStudent;

	}
	gpFirstStudent = pPreviousStudent;

}
