#include <stdlib.h>
#include <stdio.h>
int main ()
{
	int num;
	char choice;
	do 
	{
		printf("Enter any number <1-7> (8- exit):- ");
scanf("%d",&num);
		switch(num)
		{
    case 1:
			if (num=1)
			printf("It is Monday\n");	
			break;
	case 2:
			if (num=2)
			printf("It is Tuesday\n");
			break;
		
    case 3:
			if (num=3)
			printf("It is Wednesday\n");
			break;
    case 4:
				if (num=4)
			printf("It is Thursday\n");
			break;
    case 5:
				if (num=5)
			printf("It is Friday\n");
			break;
	case 6:
			if (num=6)
			printf("It is Saturday\n");
			break;
    case 7:
				if (num=7)
			printf("It is Sunday\n");
			break;		
    case 8:
			exit (0);
			break;	
    default:
			printf("Invalid Number\n");
			break;
			}
			}while (1);
			}
			