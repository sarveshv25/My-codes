#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int i,flag,lno,uno;
	
     printf("Enter your range:-");
	scanf("%d %d",&lno,&uno);
if (lno<=1)
	{
		printf("\nInvalid range");
exit(0);
}
else
{
	printf("The series of prime numbers between %d and %d is:- ",lno,uno);
	for(;lno<=uno;lno++)
	{
		flag=0;
for(i=2;i<=lno/2;i++)	
	{
	if(lno%i==0)		
		{	
	flag=1;
	break;
	}
	}
	if (flag==0)
	printf("%d ",lno);
	}
	}
	}
