/*
 ============================================================================
 Name        : Task.c
 Author      : Mohamed Mostafa Shaban Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Midterm Exam codes solutions
 ============================================================================
 */

//#include <stdio.h>
//#include <stdlib.h>
////Q1:sum of numbers
//int sumOfDigits(int num){
//	int digit,sum = 0;
//	while(num!=0){
//		digit = num%10;
//		sum += digit;
//		num /= 10;
//	}
//	return sum;
//}
//int main(void) {
//	int num, result;
//	printf("Enter an input: ");
//	fflush(stdin); fflush(stdout);
//	scanf("%d",&num);
//	result = sumOfDigits(num);
//	printf("Sum = %d",result);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
////Q2:take an integer number and calculate it's square root?
//double findSqrt(int num){
//	return pow(num,0.5);
//}
//int main(void) {
//	int num;
//	double result;
//	printf("Enter an input: ");
//	fflush(stdin); fflush(stdout);
//	scanf("%d",&num);
//	result = findSqrt(num);
//	printf("Result = %0.3lf",result);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
////Q3:print all prime numbers between two numbers
//void printPrimeNumbers(int start,int end){
//	int i;
//	int prime = 1;
//	printf("Output: ");
//	while(start < end){
//		for(i = 2; i <= start/2; i++){
//			if(start % i == 0){
//				prime = 0;
//				break;
//			}
//		}
//		if(prime == 1)
//			printf("%d ", start);
//		start++;
//		prime = 1;
//	}
//}
//int main(void) {
//	int n1,n2;
//	printf("input: n1 = ");
//	fflush(stdin); fflush(stdout);
//	scanf("%d",&n1);
//	printf("n2 = ");
//	fflush(stdin); fflush(stdout);
//	scanf("%d",&n2);
//	printPrimeNumbers(n1,n2);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
////Q4: function to revers digits in number
//int reverseDigits(int num){//123
//	int digit,reverse = 0;
//	while(num != 0){
//		digit = num%10;//3
//		num /= 10;//12
//		reverse = digit + reverse * 10;
//	}
//	return reverse;
//}
//int main(void) {
//	int num,res;
//	printf("input: ");
//	fflush(stdin); fflush(stdout);
//	scanf("%d",&num);
//	res = reverseDigits(num);
//	printf("output: %d",res);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
////Q5:function to count number of ones in binary number
//int countNumberOfOnes(int num){
//	int digit,count = 0;
//	while(num != 0){
//		digit = num%2;
//		num /= 2;
//		if(digit == 1)
//			count++;
//	}
//	return count;
//}
//int main(void) {
//	int num,res;
//	printf("input: ");
//	fflush(stdin); fflush(stdout);
//	scanf("%d",&num);
//	res = countNumberOfOnes(num);
//	printf("output: %d",res);
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
////Q6:function to return unique number in array with one loop
//int uniqueElement(int arr[],int size){
//	int frequency[1000] = {0}; //initialize array with all zeros
//	int i;
//	for(i = 0; i < size; i++){
//		if(frequency[arr[i]] == 0)
//			frequency[arr[i]] = 1;//mark the element that have first occurrence
//		else
//			frequency[arr[i]]++; //increment the repeated element
//	}
//	for(i = 0; i < size; i++){
//		if(frequency[arr[i]] == 1)
//			return arr[i]; //return the unique element
//	}
//	return -1;
//}
//int main(void) {
//	int res;
//	int arr[7] = {4,2,5,2,5,7,4};
//	res = uniqueElement(arr, sizeof(arr)/sizeof(arr[0]));
//	printf("output: %d",res);
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
////Q7: function to sum numbers from 1 to 100(without loop)
////using formula
////int sumFrom1To100(int end){
////	int sum = 0;
////	sum = end*(end+1)/2;
////	return sum;
////}
////using recursion
//int summation(int num){
//	if(num == 1)
//		return 1;
//	else if(num == 0)
//		return 0;
//	else
//		return num + summation(num-1);
//}
//int main(void) {
//	int sum = 0;
//	int end;
//	printf("input: ");
//	fflush(stdin); fflush(stdout);
//	scanf("%d",&end);
//	//sum = sumFrom1To100(end);
//	sum = summation(end);
//	printf("output: %d",sum);
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
////Q8: function to take an array and revers its elements
//void reverseArray(int arr[],int size){
//	int i = 0;
//	int j = size-1;
//	while(i < j){
//		int temp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = temp;
//		i++;
//		j--;
//	}
//}
//int main(void) {
//	int arr[5]={1,2,3,4,5};
//	int n =  sizeof(arr)/sizeof(arr[0]);
//	reverseArray(arr,n);
//	int i;
//	printf("output: ");
//	for(i = 0; i < n; i++)
//		printf("%d ",arr[i]);
//	return 0;
//}


//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
////Q9:function to reverse words in string
//void reverseWords(char str[],int len){
//	int i,j,startIndex,endIndex;
//  	endIndex = len - 1;
//	printf("output: ");
//  	for(i = len - 1; i >= 0; i--){
//		if(str[i] == ' ' || i == 0){
//			if(i == 0)
//				startIndex = 0;
//			else
//				startIndex = i + 1;
//			for(j = startIndex; j <= endIndex; j++){
//				printf("%c", str[j]);
//			}
//			endIndex = i - 1;
//			printf(" ");
//		}
//	}
//}
//
//int main(void) {
//	char str[100];
//	printf("input: ");
//	fflush(stdin); fflush(stdout);
//	gets(str);
//	int length = strlen(str);
//	reverseWords(str,length);
//	return 0;
//}



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Q10: function to count the max number of ones between two zeros
int maxOnesBtnTwoZeros(int num){
	int maxOnes = INT_MIN;
	int ones = 0;
	int zero = 0;
	while(num != 0){
		if(num & 1){ //01110
			ones++;
		}else{
			zero = 1;
			ones = 0;
		}
		if(zero == 1 && ones > maxOnes){
			maxOnes = ones;
		}
		num >>= 1;
	}
	return maxOnes;
}
void getBinary(int num){
	if(num > 1)
		getBinary(num/2);
	printf("%d",num % 2);
}
int main(void) {
	int num;
	printf("input: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("Binary representation for %d = ",num);
	getBinary(num);
	int res = maxOnesBtnTwoZeros(num);
	printf("\noutput: %d",res);
	return 0;
}
