#include <stdio.h>
int main ()
{
	int row,col,no,sp,option;
	do
	{
	printf("Enter any number:- ");
scanf("%d",&no);
		row=1;
	while(row<=no)
{
	sp=1;
	while(sp<=no-row) //(sp<row) [[ulta rhombus]]
{
printf(" ");
sp++;
	}
	col=1;
	while(col<=no)
{
	printf("*");
col++;
	}
	printf("\n");
row++;
	}
printf("\n Do you want to continue? <Y/N>:- ");
		fflush(stdin);
		scanf("%c",&option);
printf("\n\n");
} while (option=='Y'||option=='y');	
	}
	
