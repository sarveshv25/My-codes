#include <stdio.h>
int main ()
{
	int arr[50],size,i,sum;
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
for(i=0,sum=0;i<size;i++)
sum+=arr[i];
printf("\n The sum of array element is %d",sum);
}





