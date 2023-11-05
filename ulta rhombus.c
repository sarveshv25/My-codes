#include <stdio.h>
int main ()
{
	int row=1,col,no,sp;
	printf("Enter any number:- ");
scanf("%d",&no);
	while(row<=no)
{
	sp=1;
	while (sp<row) //[[saral rhombus]] (sp<=no-row)
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
	}
