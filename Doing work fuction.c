#include <stdio.h>
void calSum(int,int);
int main ()
{
	int no1,no2;
	printf("Enter two numbers:- ");
	scanf("%d%d,&no1,&no2");
	calSum(no1,no2);
	}
	void calSum (int n1,int n2)
	{
		int sum;
		sum=n1+n2;
		printf("%d+%d=%d",n1,n2,sum);
}



