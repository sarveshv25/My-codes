#include<stdio.h>
#include"header.h"
void main ()
{
	char str[50],find[50];
	printf("Enter any string: ");
	fflush(stdin);
	gets(str);
	printf("Enter second string: ");
	fflush(stdin);
	gets(find);
	if(checkSubString(str,find)==1)
	printf("%s is substring",find);
	else
	printf("%s is not a substring",find);
}
   
