#include <stdio.h>
int main ()
{
	int no,num,unit,sum,cube;
	printf("Enter any number:- ");
	scanf("%d",&no);
	for (num=no,sum=0;num>0;num/=10)
	{
		unit=num%10;
		cube=unit*unit*unit;
		sum+=cube;
		}
		if(no==sum)
		printf("The number is Armstrong number");
		else
		printf("The number is not an Armstrong number");
}





