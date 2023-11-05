#include <stdio.h>
int main ()
{
int num,i=1,sum=0;
	printf("Enter any num :- ");
scanf("%d",&num);
	while(i<=num/2)
{
	if(!num%i)
	sum+=i;
	i++;
	}
	if (num==sum)
	printf("%d is a perfect number",num);
else 
	printf("%d is not a perfect number",num);
}

