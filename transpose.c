#include <stdio.h>
#include "header.h"

int main() {
    int arr1[5][5], arr2[5][5], rsize, csize, i, j;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rsize, &csize);

    printf("Enter %d numbers:\n", rsize * csize);
    for (i = 0; i < rsize; i++) {
        for (j = 0; j < csize; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    transpose(arr1, arr2, rsize, csize);

    printf("\nThe transpose of the matrix is:\n");
    for (i = 0; i < csize; i++) {
        for (j = 0; j < rsize; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}

