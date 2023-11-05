#include<stdio.h>
#include "header.h"
void concatenate (char [], char[]);
void main ()
{
	char name[50],surname[50];
	printf("Enter your name: ");
	fflush(stdin);
	gets(name);
	printf("\nEnter your surname: ");
	fflush(stdin);
	gets(surname);
	concatenate(name,surname);
	printf("The concatenated string is: %s",name);
}
    
