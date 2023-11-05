#include<stdio.h>
int checkPallindrome(char *n);
void main ()
{
	char name [50];
	printf("Enter your name: ");
	fflush(stdin);
	gets(name);
	
	if(checkPallindrome(name)==1)
	printf("%s is pallindrome",name);
	else
	printf("%s is not pallindrome",name);
}

int checkPallindrome(char *n)
{
	
	int i,j,f;
	for(j=0;*(n+i)!='\0';j++);
	{
		for(i=0,f=0,--j;i<j;i++,j--)
		{
			if (*(n+i)!=*(n+j))
			{
				f=1;
				break;
			}
		}
		return f;
	}
}
