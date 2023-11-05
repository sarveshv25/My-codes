#include<stdio.h>
typedef struct student
{
	int rollno,marks[3];
	char name [50];
}STUD;
void main ()
{
	STUD s[50];
	int i,j,size;
	printf("How many records you want to enter? <max 50>: ");
	scanf("%d",&size);
	printf("Enter %d student record\n\n",size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter data of student %d\n\n",i+1);
		printf("Enter roll number: ");
		scanf("%d",&s[i].rollno);
		printf("Enter your name: ");
		fflush(stdin);
		gets(s[i].name);
	}
	printf("\nThe student data is:\n\n");
	for(i=0;i<size;i++)
	{
		printf("\nHi %s your roll number is %d",s[i].name,s[i].rollno);
		
		
		printf("\n\nEnter 3 subjects marks:\n");
		for(j=0;j<3;j++)
		{
	
			scanf("%d",&s[i].marks[j]);
		}
	}
}

