#include<stdio.h>
void main ()
{
	int i,count;
	char name [50];
	printf("Enter your name: ");
	fflush(stdin);
	gets(name);
	for(i=0,count=0;name[i]!='\0';i++);
	 {
	  if (name[i]=='A'||name[i]=='a'||name[i]=='E'||name[i]=='e'||name[i]=='I'||name[i]=='i'||name[i]=='O'||name[i]=='o'||name[i]=='U'||name[i]=='u')
	  count++;
	} 
	  printf("%s has %d vowels",name,count);
}


