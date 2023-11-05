#include<stdio.h>
#include"header.h"
void strCopy(char [],char []);
void main()
{
	char name[50],name1[50];
	printf("Enter your name: ");
	fflush(stdin);
	gets(name);
	strCopy(name,name1);
	puts(name1);
}
