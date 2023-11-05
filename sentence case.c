#include<stdio.h>
#include "header.h"
void convertToSentence(char [3]);
void main ()
{
	int arr[50];
	char name[50];
	printf("Enter your name: ");
	fflush(stdin);
	gets(name);
	convertToSentence(name);
	printf("\nThe string in sentence case is : %s",name);
}

