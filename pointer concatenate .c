#include<stdio.h>
void concatenate ( char *n,char *s);
void main ()
{
	char name [50],surname [50];
	printf("Enter your name: ");
	fflush(stdin);
	gets(name);
	printf("Enter your surname: ");
	fflush(stdin);
	gets(surname);
	concatenate(name,surname);
	printf("The concatenated string is %s",name);
}
void concatenate( char *n, char *s)
{
	int i,j;
	for(i=0;*(n+i)!='\0';i++)
	
	for(i=0;*(s+i)!='\0';i++,j++)
	*(n+i)=*(s+j);
	*(n+i)='\0';
}
