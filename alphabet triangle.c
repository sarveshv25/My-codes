#include <stdio.h>
int main ()
{
char ch;
	int row=1,col,no;
	printf("Enter any number:- ");
	scanf("%d",&no);
	while(row<=no)
	{
		col=1;
		ch='A';
		while(col<=row)
{
	printf("%c",ch);
ch++;
	col++;
	}
	printf("\n");	
row++;
	}
	}	










