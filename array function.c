#include <stdio.h>
void display (int[],int);
int main ()
{
int arr[50],i,size;
	x:
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    if (size <= 0 || size > 50) {
        printf("\nInvalid size");
        goto x;
    }
  printf("\nEnter the elements:-\n");  
    for(i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }    
     display(arr,size);
     return 0;
     }
void display (int a[],int s)
{
	int i;
	printf("\n The array is:- ");
for (i=0;i<s;i++)
	{
	printf("%d ",a[i]);
	}
	printf("\n");
	}
	
