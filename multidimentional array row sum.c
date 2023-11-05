#include <stdio.h>
int main ()
{
	int mat[4][4],rsize,csize,i,j,sum;
	printf("Enter number of rows & column of the matrix: ");
    scanf("%d %d",&rsize,&csize);
    printf("Enter %d numbers:\n",rsize*csize);
    for(i=0;i<rsize;i++)
    {
    	for(j=0;j<csize;j++)
    	scanf("%d",&mat[i][j]);
     }
     for(i=0;i<rsize;i++)
     {
     	for(j=0,sum=0;j<csize;j++)
     	sum+=mat[i][j];
     	printf("\n The sum of row %d is: %d",i+1,sum);
     	}
     	}
    
     
     
     