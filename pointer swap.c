#include<stdio.h>
#include"header.h"
void swap(int *n1,int *n2);
void main ()
{
	int no1,no2;
	printf("Enter two numbers:\n");
	scanf("%d %d",&no1,&no2);
	printf("\nThe original values are %d %d",no1,no2);
	swap(&no1,&no2);
	printf("\nThe swapped values are: %d %d",no1,no2);
}

