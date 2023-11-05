#include <stdio.h>

int main()
{
    int row , col, no,option;
    do{
    printf("Enter any number: ");
    scanf("%d", &no);
    	row=1;

    while (row <= no)
    {
        col = 1;
        
        while (col <= (no - row))
        {
            printf(" ");
            col++;
        }

        col = 1;
        
        while (col <= row)
        {
            printf("* ");
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
	 

