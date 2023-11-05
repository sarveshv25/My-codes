#include <stdio.h>

int main()
{
    int row = 1, col, no;
    printf("Enter any number: ");
    scanf("%d", &no);

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
}


