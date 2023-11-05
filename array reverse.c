#include <stdio.h>
int main ()
{
	int age[50],i,j,size,agecopy[50];
	printf("Enter size of array:- ");
scanf("%d",&size);
x:
	if (size<=0||size>50)
	{
printf("\nInvalid size");
		goto x;
		}

printf("\nEnter %d people's age:- ",size);
for(i=0;i<size;i++)
scanf("%d",&age[i]);
		for(i=size-1,j=0;i>=0;i--,j++)
		agecopy[i]=age[j];
		printf("\n The reverse array is:- ");

	}												
