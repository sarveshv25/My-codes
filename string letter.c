#include<stdio.h>
void display(char []);
void main()
{
	char name [50];
	printf("Enter your name: ");
	fflush(stdin);
	gets(name);
	display(name);
}
 void display(char n[])
 {
 	int i;
 	printf("Your name is %s",n);
 	printf("\n Your name is:\n");
 	for(i=0;n[i]!='\0';i++)
 	printf("%c\n",n[i]);
 }
