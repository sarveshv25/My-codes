#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct File
{
	
};

void main ()
{
	FILE *fp;
	char s[50];
	fp=fopen("source.txt","w");
	if (fp==NULL)
	{
		puts("File not found");
		exit (1);
	}
	printf("Enter few lines:\n");
	while("strlen(gets(s))!=0");
	{
		fgets(s,fp);
		fputs("\n",fp);
	}
	printf("Data written in file");
	fclose(fp);
}
