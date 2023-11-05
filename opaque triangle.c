#include <stdio.h>

int main()
{
    int row = 1, col, no;
    printf("Enter any number: ");
    scanf("%d", &no);

    while (row <= no)
    {
        col = 1;

        // Print spaces before asterisks
        while (col <= (no - row))
        {
            printf(" ");
            col++;
        }

        col = 1;

        // Print asterisks
        while (col <= row)
        {
            if (col == 1 || col == row || row == no)
                printf("* ");
            else
                printf("  ");
            col++;
        }

        printf("\n");
        row++;
    }

    return 0;
}
