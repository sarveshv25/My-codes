#include <stdio.h>
int main ()
{
	int no,no1,unit,sum=0,i,fact;
	printf("Enter any number:- ");
scanf("%d",&no);
	no1=no;
	while(no1>0)
{
	unit=no1%10;
	i=1;
	fact=1;
	while(i<=unit)
{
	fact*=i;
	i++;
	}
	sum+=fact;
	no1/=10;
	}
	if (sum==no)
	printf("%d is strong number",no);
else 
	printf("%d is not strong number",no);
}



