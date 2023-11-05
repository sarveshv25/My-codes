#include<stdio.h>
#include"header.h"
void strReverse(char []);
void main ()
{
	char name [50];
	printf("Enter your name: ");
	fflush(stdin);
	gets(name);
	strReverse(name);
	printf("\nThe reverse string is: %s",name);	
}

