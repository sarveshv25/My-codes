#include <stdio.h>
int main ()
{
	int arr[50],size,i,max;
	x:
	printf("Enter array size <max 50>:- ");
scanf("%d",&size);
	if (size<=0 || size>50)
	{
		printf("\n\n Invalid size");
		goto x;
}
printf("\n Enter %d people's age:- ",size);
for(i=0;i<size;i++)
scanf("%d",&arr[i]);
for(i=0,max=arr[0];i<size;i++)
	if(arr[i]>max)
	max=arr[i];

printf("The maximum number is:- %d",max);
}
