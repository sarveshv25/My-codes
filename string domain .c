#include<stdio.h>
#include<string.h>
#include "header.h"
void showEmailByDomain (char e[][50],char d[],int s);
void main ()
{
	int size,i;
	char email[10][50],domain[50];
	printf("How many emails are to be entered? \n");
	scanf("%d",size);
	printf("\nEnter %d emails:\n",size);
	for(i=0;i<size;i++)
	{
		fflush(stdin);
		gets(email[i]);
	}
	printf("\nEnter the domain name to search: ");
	fflush(stdin);
	gets(domain);
	void showEmailByDomain(char e[][50],char d[],int s);
	
}
void showEmailByDomain(char e[][50],char d[],int s)
{
	int i;
	printf("\nThe E-mails by %s domain are: \n",d);
	for(i=0;i<s;i++)
	{
		if(strstr(e[i],d)!=NULL)
		puts(e[i]);
	}
}
