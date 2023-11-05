#include <stdio.h>
int main ()
{
	int row=1,col,no,num=1;
	printf("Enter any number:- ");
scanf("%d",&no);
	while(row<=no)
{
	col=1;
	while(col<=row)
{
	printf("%d",num);
num++;
	col++;
	}
	printf("\n");
row++;
	}
	}



