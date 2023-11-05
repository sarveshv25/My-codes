#include<stdio.h>
void main()
{
	int i;
	char name [50];
	printf("Enter your name: ");
	fflush(stdin);
	gets(name);
	for(i=0;name[i]!='\0';i++);
	printf("%s Your name is %d characters long",name,i);
}
