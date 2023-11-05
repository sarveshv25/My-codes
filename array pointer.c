#include<stdio.h>
void display (int*,int);
void main ()
{
	int arr[50],i,size;
	printf("Enter the size of array: ");
	scanf("%d",size);
	printf("Enter %d numbers: ",size);
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	display(arr,size);
}
void display (int *a,int s)
{
	int i;
	printf("\nThe array is: ");
	for(i=0;i<s;i++)
	{
		printf("%d",*(a+i));
	}
}
