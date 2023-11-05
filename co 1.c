#include <stdio.h>
int main ()
{
	int no1=2,no2=5,no3=4,max;
	no1>no2?(no1>no3?max=no1:max=no3);
	(no2>no3?max=no2:max=no3);
	printf("\n Max no. is %d",max);
	}
