#include<stdio.h>
#include "header.h"
int countVowels(char s[]);
void main ()
{
	char name[10][50];
	int i,size,count;
	printf("How many names are to be entered?\n");
	scanf("%d",&size);
	printf("Enter %d names: \n",size);
	for(i=0;i<size;i++)
	{
		fflush(stdin);
		gets(name[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%s has %d vowels\n",name[i],countVowels(name[i]));
	}
	
}
