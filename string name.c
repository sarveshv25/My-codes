#include<stdio.h>
void main ()
{
	int i;
	char name [50];
	printf("Enter your name: ");
	fflush(stdin);
	gets(name);
	printf("Your name is %s",name);
	gets(name);
	printf("Your name is: ");
	for(i=0;name[i]!='\0';i++)
	printf("%c",name[i]);
}
