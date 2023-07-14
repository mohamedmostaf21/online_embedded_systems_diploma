/*
 ============================================================================
 Name        : functios.c
 Author      : Mohamed Mostafa Shaban Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : solutions of home work 4 about functions
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//EX1:print prime numbers by two intervals by making user defined function
void printPrimeNumbers(int start,int end);
int main(void) {
	int s,e;
	printf("Enter two numbers(intervals): ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&s,&e);
	printPrimeNumbers(s,e);
	return 0;
}
void printPrimeNumbers(int start,int end){
	int i;
	int prime = 1;
	printf("Prime numbers between %d and %d are: ",start,end);
	while(start < end){
		for(i = 2; i <= start/2; i++){
			if(start % i == 0){
				prime = 0;
				break;
			}
		}
		if(prime == 1)
			printf("%d ", start);
		start++;
		prime = 1;
	}
}


////Ex2: Calculate factorial of a number using recursion
//int factorial(int num);
//int main(void) {
//	int num;
//	printf("Enter a positive integer: ");
//	fflush(stdin); fflush(stdout);
//	scanf("%d",&num);
//	printf("Factorial of %d = %d",num,factorial(num));
//	return 0;
//}
//int factorial(int n){
//	if(n == 0 || n == 1)
//		return 1;
//	return n * factorial(n-1);
//}



//Ex3: Reverse a sentence using recursion
//void reveseSentence(char str[], int index,int size);
//int main(void) {
//	char str[100];
//	printf("Enter a sentence: ");
//	fflush(stdin); fflush(stdout);
//	gets(str);
//	int size = strlen(str);
//	reveseSentence(str,0,size-1);
//	printf("%s",str);
//	return 0;
//}
//
//void reveseSentence(char str[], int index,int size){
//	char temp;
//	temp = str[index];
//	str[index] = str[size-index];
//	str[size-index] = temp;
//	if(index == size/2){
//		return;
//	}
//	reveseSentence(str, index+1, size);
//}

////Ex4: calculate power of number using recursion
//int caclulatePower(int base,int power);
//int main(void) {
//	int base,power;
//	printf("Enter base number: ");
//	fflush(stdin); fflush(stdout);
//	scanf("%d",&base);
//
//	printf("Enter power number(positive integer): ");
//	fflush(stdin); fflush(stdout);
//	scanf("%d",&power);
//	int res = caclulatePower(base, power);
//	printf("%d^%d = %d",base,power,res);
//	return 0;
//}
//int caclulatePower(int base,int power){
//	if(power == 1)
//		return base;
//	return base * caclulatePower(base,power-1);
//}
