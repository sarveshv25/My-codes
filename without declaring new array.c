#include <stdio.h>
int main ()
{
	int age[50],i,j,temp,size,agecopy[50];
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
		for(i=0,j=size-1;i<j;i++,j--)
		{
			temp=age[i];
			age[i]=age[j];
			age[j]=temp;
			}
			printf("\n The reverse array is:- ");
for(i=0;i<size;i++)
printf("%d ",age[i]);
}


