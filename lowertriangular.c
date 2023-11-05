#include <stdio.h>
int main ()
{
	int arr[5][5],rsize,csize,i,j;
	printf("Enter number of rows & column of the matrix: ");
    scanf("%d %d",&rsize,&csize);
    printf("Enter %d numbers:\n",rsize*csize);
    for(i=0;i<rsize;i++)
    {
    	for(j=0;j<csize;j++)
    	scanf("%d",&arr[i][j]);
     }
     if(checklower(arr,rsize,csize==0))
     printf("The matrix is lower triangular");
     else
     printf("The matrix isn't lower triangular");
 }
int checklower(int a[][5],int r,int c)
{
	int i,j,flag;
	for(flag=0,i=0;i<r-1;i++)
	{
		for(j=i+1;j<i;j++)
		{
			if (a[i][j]!=0)
			{
				flag=0;
				goto x;
			}
		}
	}
	x:
		return flag;
}
   	
   

