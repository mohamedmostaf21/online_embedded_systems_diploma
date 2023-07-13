/*
 ============================================================================
 Name        : arrays_and_strings.c
 Author      : Mohamed Mostafa Shaban
 Version     :
 Copyright   : Your copyright notice
 Description : Solutions of third assignment
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//EX1:sum of two matrices
int main(void) {
	float a[2][2],b[2][2];
	int r,c;
	char ch;
	printf("Enter the elements of 1st matrix\n");
	for(r = 0; r < 2; r++){
		for(c = 0; c < 2; c++){
			printf("Enter a%d%d: ",r+1,c+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&a[r][c]);

			scanf("%c",&ch);
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	for(r = 0; r < 2; r++){
		for(c = 0; c < 2; c++){
			printf("Enter b%d%d: ",r+1,c+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&b[r][c]);

			scanf("%c",&ch);
		}
	}
	printf("Sum Of Matrix: \n");
	for(r = 0; r < 2; r++){
		for(c = 0; c < 2; c++){
			printf("%.1f ",a[r][c]+b[r][c]);
		}
		printf("\n");
	}
	return 0;
}


////EX2: calculate average using matrix
//int main(void) {
//	int n;
//	float sum = 0.0;
//	printf("Enter the numbers of data: ");
//	fflush(stdin); fflush(stdout);
//	scanf("%d",&n);
//	float* data = (float*) malloc(n*sizeof(float));
//	int i;
//	for(i = 0; i < n; i++){
//		printf("%d. Enter number: ",i+1);
//		fflush(stdin); fflush(stdout);
//		scanf("%f",&data[i]);
//		sum += data[i];
//	}
//	printf("Average = %.2f",sum/n);
//  free(data);
//	return 0;
//}

////EX3: find transpose of matrix
//int main(void) {
//	int r,c;
//	printf("Enter rows and columns of matrix: ");
//	fflush(stdin); fflush(stdout);
//	scanf("%d %d",&r,&c);
//	int* a[r];
//	int i;
//	for(i = 0; i < r; i++)
//		a[i] = (int*) malloc(c * sizeof(int));
//	int j;
//	printf("Enter elements of matrix:\n");
//	 for (i = 0; i < r; i++){
//	        for (j = 0; j < c; j++){
//	        	printf("Enter elements a%d%d: ",i+1,j+1);
//	        	fflush(stdin); fflush(stdout);
//	        	scanf("%d",&a[i][j]);
//	        }
//	 }
//	 printf("\nEntered Matrix: \n");
//	 for (i = 0; i < r; i++){
//	        for (j = 0; j < c; j++){
//	        	printf("%d  ",a[i][j]);
//	        }
//	        printf("\n\n");
//	 }
//	 printf("\nTranspose of Matrix: \n");
//	 for (i = 0; i < c; i++){
//	 	        for (j = 0; j < r; j++){
//	 	        	printf("%d  ",a[j][i]);
//	 	        }
//	 	        printf("\n\n");
//	 }
//	 for(i = 0; i < r; i++)
//		 free(a[i]);
//	 free(a);
//	return 0;
//}

////EX4: insert element at certain position in array
//int main(void) {
//	int n;
//	printf("Enter no of elements : ");
//	fflush(stdin); fflush(stdout);
//	scanf("%d",&n);
//	int *a = (int*)malloc(n);
//	int i;
//	for(i = 0; i < n; i++){
//		fflush(stdin); fflush(stdout);
//		scanf("%d",&a[i]);
//	}
//	int element;
//	printf("Enter the element to be inserted : ");
//	fflush(stdin); fflush(stdout);
//	scanf("%d",&element);
//	int loc;
//	printf("Enter the location : ");
//	fflush(stdin); fflush(stdout);
//	scanf("%d",&loc);
//	//increase the size by one element
//	int newSize = n+1;
//	a = realloc(a, newSize);
//
//	for(i = newSize-1; i >= loc; i--)
//		a[i] = a[i-1];
//	a[loc-1] = element;
//	for(i = 0; i < newSize; i++){
//		printf("%d ", a[i]);
//	}
//	return 0;
//}


////EX5: Search element  in array
//
//int main(void) {
//	int n;
//	printf("Enter no of elements : ");
//	fflush(stdin); fflush(stdout);
//	scanf("%d",&n);
//	int *a = (int*)malloc(n);
//	int i;
//	for(i = 0; i < n; i++){
//		fflush(stdin); fflush(stdout);
//		scanf("%d",&a[i]);
//	}
//	int element;
//	printf("Enter the element to be searched : ");
//	fflush(stdin); fflush(stdout);
//	scanf("%d",&element);
//
//	int loc;
//	for(i = 0; i < n; i++){
//		if(a[i] == element){
//			loc = i+1;
//			break;
//		}
//	}
//	printf("Number found at the location = %d",loc);
//	return 0;
//}

//strings
////EX1:find the frequency of characters in a string
//int main(void) {
//	char string[100];
//	int freq[26];
//	printf("Enter a string: ");
//	fflush(stdin); fflush(stdout);
//	gets(string);
//	strlwr(string);
//
//	int i;
//	for(i = 0; i < 26; i++){
//		freq[i] = 0;
//	}
//
//	for(i = 0; i < strlen(string); i++){
//		if(string[i] >= 'a' && string[i] <= 'z'){
//			freq[string[i]-'a']++;
//		}
//	}
//	char ch;
//	printf("Enter a character to find frequency : ");
//	fflush(stdin); fflush(stdout);
//	scanf("%c",&ch);
//	printf("Frequency of %c = %d",ch,freq[ch-'a']);
//
//	return 0;
//}

////EX2:find the length of a string
//int main(void) {
//	char string[100];
//	printf("Enter a string: ");
//	fflush(stdin); fflush(stdout);
//	gets(string);
//	int i;
//	int length = 0;
//	for(i = 0; string[i] != 0; i++){
//		length++;
//	}
//	printf("Length of string: %d", length);
//	return 0;
//}



////EX3:reverse a string
//int main(void) {
//	char string[100];
//	printf("Enter the string : ");
//	fflush(stdin); fflush(stdout);
//	gets(string);
//	int i = 0;
//	int j = strlen(string)-1;
//	while(j > i){
//		char temp = string[i];
//		string[i] = string[j];
//		string[j] = temp;
//		i++;
//		j--;
//	}
//	printf("Reverse string is : %s", string);
//	return 0;
//}
