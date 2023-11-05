#include <stdio.h>
int main ()
{
	int no,i,flag;
	char option;
	do
	{
	printf("Enter any positive number:- ");
scanf("%d",&no);
	for(i=2,flag=0;i<=no/2;i++)
{
	if (no%i==0)
	{
		flag=1;
		break;
		}
		}
		if (flag==0)
		printf("%d is a prime number",no);
else
		printf("%d is not a prime number",no);

	printf("\n \n Do you want to continue? <Y/N>:- ");
		fflush(stdin);
		scanf("%c",&option);
        printf("\n\n");
    }while (option=='Y'||option=='y');
		}
		



