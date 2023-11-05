#include <stdio.h>
int main ()
{
	int num,i=1,fact=1,option;
	do
	{
	printf("Enter any number:- ");
scanf("%d",&num);
	while(i<=num)
{
	fact*=i;
	i++;
	}
	printf("%d!=%d",num,fact);
	printf("\n Do you want to continue? <Y/N>:- ");
		fflush(stdin);
		scanf("%c",&option);
printf("\n\n");
} while (option=='Y'||option=='y');
	
}









