#include <stdio.h>
int main ()
{

	int lno,uno,sume=0,sumo=0;
	printf("Enter two numbers:-  ");
	scanf("%d%d",&lno,&uno);
	while(lno%2<=uno)
{
	if(lno%2==0)
	sume+=lno;
	
	else
	sumo+=lno;
	lno++;
	}
	printf("Sum of odd numbers is:- ");
	printf("sum of evem numbers is:- ");
	}
	






