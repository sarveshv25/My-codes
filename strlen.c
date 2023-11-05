#include<stdio.h>
#include<string.h>

int main ()
{
	char name [10][50];
	int i,size;
	printf("How many names are to be entered?\n");
	scanf("%d",&size);
	printf("Enter %d names: \n ",size);
	
	for(i=0;i<size;i++)
	{
       fflush(stdin);
	   gets(name[i]);
    }
     for(i=0;i<size;i++)
	{
		printf("%s is %d characters long\n",name[i],strlen(name[i]));
	}
	return 0;
}
