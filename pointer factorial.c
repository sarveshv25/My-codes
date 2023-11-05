#include<stdio.h>
#include"header.h"
void calFact(int,int*);
void main()
{
	int num,fact=1;
	printf("Enter any number: ");
	scanf("%d",&num);
	calFact(num,&fact);
	printf("%d!=%d",num,fact);
}

