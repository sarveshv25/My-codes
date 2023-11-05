#include<stdio.h>
typedef struct person
{
	int age;
	char name [50];
}PERSON;
typedef struct student
{
	int maths,sci,eng,total;
	float per;
	PERSON p;
}STUD;
void main ()
{
	STUD s1,s2;
	printf("Enter name of student 1:\n");
	fflush(stdin);
	gets(s1.p.name);
	printf("Enter the age of student 1: ");
	scanf("%d",&s1.p.age);
	printf("Enter the marks of 3 subjects:\n");
	scanf("%d %d %d",s1.maths,s1.sci,s1.eng);
	s1.total=s1.maths,s1.sci,s1.eng;
	s1.per=(float)s1.total/300*100;
	printf("The total of all 3 subjects are: ",s1.total);
	printf("The percentage is: ",s1.per);
}
