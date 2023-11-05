#include <stdio.h>
int main ()
{
	int row=1,col,no,sp;
	printf("Enter any number:- ");
scanf("%d",&no);
	while(row<=no)
{
	sp=1;
	while(sp<=no-row)
{
printf(" ");
sp++;
	}
	col=1;
	while(col<=no)
{
	if(row==1||row==no||col==1||col==no||col==row||col==(no-row+1))
	{
	printf("*");
}
else
{
	printf(" ");
	}
	col++;
	}
	printf("\n");
row++;
	}
	}











