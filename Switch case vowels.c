#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int num;
	char choice;
	while(1)
	{
		printf("\n\nEnter any alphabet:- ");
		scanf(" %c",&choice);
		switch(choice)
		{
		        case 'A':
				case 'a':
				case 'E':
				case 'e':
			    case 'I':
				case 'i':
				case 'O':
				case 'o':
				case 'U':
				case 'u':
			
			printf("%c is a vowel\n",choice);
			break;
		default:
			printf("%c is a consonant\n",choice);
			break;
			
		}
	}
}
