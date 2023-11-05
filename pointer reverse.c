#include<stdio.h>
int strRev(int* ,int* ,int);
void main ()
{
	int arr[50],i,size,arrcopy[50];
	printf("Enter the size of array: ");
	scanf("%d",size);
	printf("Enter %d elements: ");
	scanf("%d",arr[i]);
    strRev(arr,arrcopy,size);
}
int strRev(int *a,int *c,int s)
{
	int i,j;
	for(i=s-1,j=0;i>=0;i--,j++)
		*(a+i)=*(a+j);
		printf("The reverse array is: ");
}


