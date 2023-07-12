/*
 ============================================================================
 Name        : P2.c
 Author      : Mido
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
typedef long long ll;
//EX7 //factorial for higher inputs
int main()
{
    int n;
    printf("Enter an integer: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &n);
    if(n < 0){
    	printf("Error!!! Factorial for negative numbers doesn't exist.");
    	return 0;
    }

    int j = 2; // last multiple of factorial of any number goes upto 2
    int a[1000] = {0};// array of 1000 spaces initialized with 0
    a[0] = 1;
    int len = 1;// length starts with one
    int c = 0, num = 0;
    while(j <= n) // till j is less than value for which factorial is required
    {
        c = 0;
        num = 0;
        while(c < len)
        {
            a[c] = a[c] * j;//6
            a[c] = a[c] + num;//6
            num = a[c] / 10;//0
            a[c] = a[c] % 10;//6
            c++;//2
        }
        while(num != 0)
        {
            a[len] = num % 10;
            num = num / 10;
            len++;
        }
        j++;//3
    }
    len--;
    printf("Factorial = ");
    while(len >= 0)
    {
        printf("%d", a[len]);
        len--;
    }
    return 0;
}
