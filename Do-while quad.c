#include <stdio.h>
int main ()
{
	int row,col,no,option;
	do
	{
		row=1;
	    printf("Enter number of rows:-");
        scanf("%d",&no);
	    while(row<=no)
        {
	      col=1;
	      while(col<=no)
          {
	         printf("₹");
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

