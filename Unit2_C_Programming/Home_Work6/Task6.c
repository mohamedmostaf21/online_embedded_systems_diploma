#include <stdio.h>
// Q1:
// Write a program in C to demonstrate how to handle the pointers
// in the program.
int main(){
	int m = 29;
	int *ab;
	printf("Address of m : 0x%p\n",&m);
	printf("Value of m : %d\n\n",m);

	ab = &m;
	printf("Now ab is assigned with the address of m.\n");
	printf("Address of pointer ab : 0x%p\n", ab);
	printf("Content of pointer ab : %d\n\n",*ab);

	m = 34;
	printf("The value of m assigned to 34 now.\n");
	printf("Address of pointer ab : 0x%p\n", ab);
	printf("Content of pointer ab : %d\n\n",*ab);

	*ab = 7;
	printf("The pointer variable ab is assigned with the value 7 now.\n");
	printf("Address of m : 0x%p\n",&m);
	printf("Value of m : %d\n\n",m);
	return 0;
}



// #include <stdio.h>
// // Q2:
// // Write a program in C to print all the alphabets using a pointer. Go
// // to the editor
// int main(){
// 	char ch = 'A';
// 	char *alpha = &ch;

// 	for(;*alpha != 'Z'; (*alpha)++){
// 		printf("%c ",*alpha);
// 	}
// 	printf("%c ",*alpha);
// 	return 0;
// }



// #include <stdio.h>
// #include <string.h>
// // Q3:
// // Write a program in C to print a string in reverse using a pointer
// int main(){
// 	char string[20];
// 	char *pstr1,*pstr2;

// 	printf("Pointer : Print a string in reverse order :\n");
// 	printf("------------------------------------------------");
// 	printf("\nInput a string : ");
// 	fflush(stdin); fflush(stdout);
// 	gets(string);
// 	int n = strlen(string);
// 	pstr1 = string;
// 	pstr2 = string + n - 1;
	
// 	int diff = pstr2-pstr1;
// 	while(diff > 0){
// 		int temp = *pstr1;
// 		*pstr1 = *pstr2;
// 		*pstr2 = temp;
// 		pstr1++;
// 		pstr2--;
// 		diff = pstr2-pstr1;
// 	}
// 	printf("Reverse of the string is : %s",string);
// 	return 0;
// }





// #include <stdio.h>
// #include <string.h>
// // Q4:
// // Write a program in C to print the elements of an array in reverse
// // order.
// int main(){
// 	int arr[15];
// 	int *parr;
// 	int input;
// 	printf("Input the number of elements to store in the array (max 15) : ");
// 	fflush(stdin); fflush(stdout);
// 	scanf("%d",&input);
// 	parr = &arr[0];
// 	printf("Input 5 number of elements in the array :\n");
// 	int i;
// 	for(i = 0; i < input; i++){
// 		printf("element - %d : ",i+1);
// 		fflush(stdin); fflush(stdout);
// 		scanf("%d",parr);
// 		parr++;
// 	}
// 	parr = &arr[input-1];
// 	printf("The elements of array in reverse order are :\n");
// 	while(parr != &arr[-1]){
// 		printf("element - %d : %d\n",i,*parr);
// 		i--;
// 		parr--;
// 	}
// 	return 0;
// }


// #include <stdio.h>
// #include <string.h>
// // Q5
// // Write a program in C to show a pointer to an array which contents
// // are pointer to structure.
// struct SEmployee
// {
// 	char *name;
// 	int empID;
// };
// int main(){
// 	struct SEmployee emp1 = {"Alex",1002}, emp2 = {"Mohamed",1001}, emp3 = {"Keroles", 1003};

// 	struct SEmployee * arr[] = {&emp1,&emp2,&emp3};
// 	struct SEmployee *((*p)[3]) = &arr;
// 	int i;
// 	for(i = 0; i < 3; i++){
// 		printf("Employee Name : %s\n", (*(*p+i))->name);
// 		printf("Employee ID : %d\n", (*(*p+i))->empID);
// 	}
	
// 	return 0;
// }