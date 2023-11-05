#include<stdio.h>
void display(char *);
void main ()
{
	char str[50];
	printf("Enter your name: ");
	fflush(stdin);
	gets(str);
	display(str);
}
void display (char *s)
{
	int i;
	printf("Your name is: %s",s);
	
	printf("\nYour name is: ");
	puts(s);
	
	printf("\nYour name is: ");
	for(i=0;*(s+i)!='\0';i++)
	
	{
		printf("%c",*(s+i));
	}
}
