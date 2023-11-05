#include <stdio.h>
int main ()
{
	int base,index,power=1,i=1,option;
	do
	{
	printf("Enter base and index:- \n");
scanf("%d%d",&base,&index);
	while(i<=index)
{
	power*=base;
	i++;
	}
	printf("%d^%d=%d",base,index,power);
	printf("\n Do you want to continue? <Y/N>:- ");
		fflush(stdin);
		scanf("%c",&option);
printf("\n\n");
} while (option=='Y'||option=='y');
}




