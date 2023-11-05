#include <stdio.h>
int main()
{
	int age;
	char gender;
	printf("Enter your age:-  ");
	scanf("%d",&age);
	printf("Enter your gender <m/f>:-  ");
	fflush(stdin);
	scanf("%c",&gender);
	if ((gender=='m' && age>=21) || (gender=='f' && age>=18))
	printf("Person is eligible to marry");
	else
	printf("Person is not eligible to marry");
	return 0;
	}
	