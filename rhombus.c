#include <stdio.h>
int main ()
{
	int row=1,col,no,sp;
	printf("Enter any number:- ");
scanf("%d",&no);
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
	}





