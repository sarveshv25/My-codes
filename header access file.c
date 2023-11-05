#include <stdio.h>
#include "header.h"
int acceptArray(int a[]);
void sortAscending(int a[], int s);
void display(int a[], int s);
int main ()
{
	int a[50],size;
	size=acceptArray(a);
    sortAscending(a,size);
    printf("\nThe sorted array is: ");
    display(a,size);
    }
