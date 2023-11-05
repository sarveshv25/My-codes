#include <stdio.h>
int main ()
{
	int arr[50],size,i,count[4];
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
for(i=0;i<4;i++)
count[i]=0;
for (i=0;i<size;i++)
{
	if(arr[i]>=60)
	count [0]++;
	else if(arr[i]>=40)
count[1]++;
	else if(arr[i]>=20)
	count[2]++;
	else 
	count [3]++;
	printf("\n People greater than 60 age are:- %d",count[0]);
	printf("\n People greater than or equal to 40 age are:- %d",count[1]);
    printf("\n People greater than or equal to 20 age are:- %d",count[2]);
	printf("\n People less than 20 age are:- %d",count[3]);
	}
	}


