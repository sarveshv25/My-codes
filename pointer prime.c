#include<stdio.h>
int calPrime (int n,int*);
void main ()
{
	int no,flag=0;
	printf("Enter any positive number: ");
	scanf("%d",&no);
	calPrime(no,&flag);
	if(flag==0)
	printf("The number is prime number");
	else
	printf("The number is not prime number");
}
int calPrime(int n,int*f)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			*f=1;
			break;
		}
		

	}
}

