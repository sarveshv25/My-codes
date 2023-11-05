#include<stdio.h>

void Display(char n[][50],int s);
void main ()
{
	int i,j,size;
	char name [10][50];
	printf("Enter the number of names to be accepted: ");
	fflush(stdin);
	scanf("%d",&size);
	printf("Enter %d names:\n",size);
	fflush(stdin);
	gets (name);
	Display(name,size);		
}
void Display(char n[] [50],int s)
{
	int i;
	printf("\nThe names are:\n");
	for(i=0;i<s;i++)
	{
		puts(n[i]);
	}
}

