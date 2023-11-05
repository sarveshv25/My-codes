#include <stdio.h>
int main ()
{
	int arr[50],size,i;
	x:
	printf("Enter array size <max 50>:- ");
scanf("%d",&size);
	if (size<=0 || size>50)
	{
		printf("\n\n Invalid size");
		goto x;
}
printf("\n Enter %d numbers:- ",size);
for(i=0;i<size;i++)
scanf("%d",&arr[i]);
printf("\n The array is :- ");
for(i=0;i<size;i++)
printf("%d",arr[i]);
}



