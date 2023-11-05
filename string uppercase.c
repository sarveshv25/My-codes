#include<stdio.h>
#include "header.h"
void convertToUpper(char []);
void main()
{
	char name [50];
	printf("Enter your name: ");
	fflush(stdin);
	gets(name);
	convertToUpper (name);
	printf("The Upper string in: %s",name);
}
