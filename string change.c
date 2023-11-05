#include<stdio.h>
void main()
{
	int i;
	char name[50],ch1,ch2;
	printf("Enter your name: ");
	fflush(stdin);
	gets(name);
	printf("Enter the character to be replaced: ");
	fflush(stdin);
	scanf("%c",&ch1);
	printf("Enter the character which would be replaced: ");
	fflush(stdin);
	scanf("%c",&ch2);
	for(i=0;name[i]!='\0';i++)
	{
		if (name[i]==ch1)
		name[i]=ch2;
	}
	printf("Your name is %s",name);
	
}
