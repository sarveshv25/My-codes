#include <stdio.h>
void main()
{
	char name[10] [50];
	int i,j,size;
	printf("How many names are to be entered ?\n");
	scanf("%d",&size);
	printf("Enter %d names:",size);
	for(i=0;i<size;i++)
	{
		fflush(stdin);
		gets(name [i]);
	}
	 printf("\nThe names are:\n");
	 for(i=0;i<size;i++)
	 puts (name [i]);
}
