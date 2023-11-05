#include <stdio.h>
void display (int[],int);
void reverseArray (int [],int);
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
 reverseArray(arr,size);
   printf("\nThe reverse array is:- "); 
for(i=0;i<size;i++)
printf("%d ",arr[i]);
}
void reverseArray(int a[],int s)
{
	int i,j,temp;
	for(i=0,j=s-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
		}


