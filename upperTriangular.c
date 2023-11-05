#include <stdio.h>

int checkupper(int a[][4], int r, int c) {
    int i, j;
    for (i = 1; i < r; i++) {
        for (j = 0; j < i; j++) {
            if (a[i][j] != 0) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int mat[4][4], rsize, csize, i, j;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rsize, &csize);

    printf("Enter %d numbers:\n", rsize * csize);
    for (i = 0; i < rsize; i++) {
        for (j = 0; j < csize; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (checkupper(mat, rsize, csize) == 0)
        printf("The matrix is not upper triangular.\n");
    else
        printf("The matrix is upper triangular.\n");

    return 0;
}

