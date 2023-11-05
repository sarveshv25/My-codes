#include<stdio.h>
typedef struct student 
{
	int rollno;
	char name [50];
}STUD;
void main ()
{
	STUD s1,s2;
	printf("Enter roll number of student 1: ");
	scanf("%d",&s1.rollno);
	printf("\nEnter name of student 1:\n");
	fflush(stdin);
	gets(s1.name);
	printf("%s your roll number is %d",s1.name,s1.rollno);
}
