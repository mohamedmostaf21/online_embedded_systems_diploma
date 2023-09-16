/*
 * Linked_List.h
 *
 *  Created on: 15 Sept 2023
 *      Author: Access
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "conio.h"
#define DPRINTF(...)   {fflush(stdout); \
						fflush(stdin); \
						printf(__VA_ARGS__); \
						fflush(stdout); \
						fflush(stdin); }
struct Sdate{
	int ID;
	char name[40];
	float height;
};
struct SStudent{
	struct Sdate Student;
	struct SStudent* PNextStudent;
};

//APIs
void fill_the_record(struct SStudent* new_student);
void Add_Student();
int Delete_Student();
void View_Students();
void Delete_All();
void Get_Nth();
int Get_Length_Iterative();
int Get_Length_Recursive(struct SStudent* pHeadStudent);
void Show_Length_Iterative();
void Show_Length_Recursive();
void Get_Nth_From_End();
void Get_Middle_Of_List();
int Detect_Loop();
void Reverse_List();
#endif /* LINKED_LIST_H_ */
