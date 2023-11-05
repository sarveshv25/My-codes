#include<stdio.h>
#include"header.h" 
int checkPallindrome ();
void main()
{
	char name[50];
	printf("Enter your name: ");
	fflush(stdin);
	gets(name);
	if (checkPallindrome)
	printf("%s is pallindrome",name);
	else
	printf("%s is not pallindrome",name);
}

