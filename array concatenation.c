#include <stdio.h>
int arrayConcatenate(int[],int,int[],int);
int main ()
{
	int arr1[200],arr2[100],size1,size2,i;
	x:
    printf("Enter size of 1st array: ");
    scanf("%d", &size1);
    if (size1 <= 0 || size1 > 100) {
        printf("\nInvalid size");
         goto x;
        }
        printf("\nEnter elements of 1st array: ");
        for(i=0;i<size1;i++)
        {
        	scanf("%d",&arr1[i]);
        	}
        y:
    printf("\nEnter size of 2nd array: ");
    scanf("%d",&size2);
    	if (size2 <= 0 || size2 > 100) {
        printf("\nInvalid size");  
    		goto y;
    		}
    		  printf("\nEnter elements of 2nd array: ");
        for(i=0;i<size2;i++)
        {
        	scanf("%d",&arr2[i]);
        	}  
size1=arrayConcatenate(arr1,size1,arr2,size2);
        printf("\nThe concatinate array is: ");
        for(i=0;i<size1;i++)
    		{
        printf("%d ",arr1[i]);
}
return 0;
}
int arrayConcatenate(int a1[],int s1,int a2[],int s2)
{
	int i,j;
	
	for (i=s1,j=0;j<s2;i++,j++)
	{
	a1[i]=a2[j];
		}
	s1+=s2;
	return s1;
	}




