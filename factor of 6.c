﻿#include <stdio.h>
int main ()
{
	int num,i=1;
	printf("Enter any number:- ");
scanf("%d",&num);
	printf("The factors of %d are:- \n",num);
while(i <= num/2)
{
	if (num%i==0)
	printf("%d\n",i);
i++;
	}
	}





