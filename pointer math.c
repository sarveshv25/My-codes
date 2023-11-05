#include<stdio.h>
#include"header.h"
void calMath(int,int,int*,int*,int*,float*);
void main ()
{
	int no1,no2,sum,sub,mul;
	float div;
printf("Enter two numbers:\n ");
scanf("%d %d",&no1,&no2);
calMath(no1,no2,&sum,&sub,&mul,&div);
printf("\n%d+%d=%d",no1,no2,sum);
printf("\n%d-%d=%d",no1,no2,sub);
printf("\n%dx%d=%d",no1,no2,mul);
printf("\n%d/%d=%f",no1,no2,div);
}

