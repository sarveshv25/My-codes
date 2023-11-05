#include<stdio.h>
void main ()
{
	int arr[50],size,i,arrcopy[50];
	printf("Enter the size: ");
	scanf("%d",&size);
	printf("Enter %d numbers: ",size);
	for(i=0;i<size;i++)
	{
	  scanf("%d",&arr[i]);
	}
	copyArr(arr,arrcopy,size);
	printf("The copied array is : ");
	for(i=0;i<size;i++);
	{
	}	
}
void copyArr(int *a,int *c,int s)
{
	int i;
	for(i=0;i<s;i++)
	*(c+i)=*(a+i);
}
