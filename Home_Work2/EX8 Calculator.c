/*
 ============================================================================
 Name        : p1.c
 Author      : Mido
 Version     :
 Copyright   : Your copyright notice
 Description : calculator c program
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
typedef long long ll;
//EX8
int main(void) {
	char choice;
	printf("Enter operator either + or - or * or divide : ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &choice);
	float op1,op2;
	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &op1,&op2);
	switch(choice){
	case '+':
		printf("%.1f %c %.1f = %.1f",op1,choice,op2,op1+op2);
		break;
	case '-':
			printf("%.1f %c %.1f = %.1f",op1,choice,op2,op1-op2);
			break;
	case '*':
			printf("%.1f %c %.1f = %.1f",op1,choice,op2,op1*op2);
			break;
	case '/':
			printf("%.1f %c %.1f = %.1f",op1,choice,op2,op1/op2);
			break;

	}

	return 0;
}
