#include <stdio.h>
int main ()
{
	int no1,no2,sum; //declaration 
	char option;
	do
	{
		printf("Enter any two numbers:- ");
	scanf("%d%d",&no1,&no2);
		sum=no1+no2;
		printf("\n %d+%d=%d",no1,no2,sum);
printf("\n Do you want to continue? <Y/N>:- ");
		fflush(stdin);
		scanf("%c",&option);
printf("\n\n");
} while (option=='Y'||option=='y');
}






