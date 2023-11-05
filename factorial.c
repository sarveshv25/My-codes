#include <stdio.h>
int main ()
{
	int num,i=1,fact=1;
	printf("Enter any number:- ");
scanf("%d",&num);
	while(i<=num)
{
	fact*=i;
	i++;
	}
	printf("%d!=%d",num,fact);
}



