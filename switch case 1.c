#include<stdio.h>
#include"header.h"
void main() 
{
    int choice;
	do
    {
	 printf("      **MENU**    \n");
	 printf("\n---> Integer Operations <---\n");
	 printf("\n\n1=Prime number\n");
	 printf("\n2=Strong number\n");
	 printf("\n3=Armstrong number\n");
	 printf("\n\n---> String Operations <---\n\n");
	 printf("\n4=Check your string length\n");
	 printf("\n5=Check number vowels\n");
	 printf("\n0=Exit\n");
 	 printf("\n\n\n---> Enter your choice <---\n");
	 scanf("%d",&choice);
		switch(choice)
	{
		
	case 1:
	{
        int no,i,flag;
		char option;
		do
	{
		printf("\nEnter any positive number:- ");
		scanf("%d",&no);
		for(i=2,flag=0;i<=no/2;i++)
		{
		  if (no%i==0)
			{
				flag=1;
				break;
			}
		}
			if (flag==0)
			printf("\n%d is a prime number",no);
			else
			printf("\n%d is not a prime number",no);
	  		printf("\n\n Do you want to continue? <Y/N>:- ");
			fflush(stdin);
			scanf("%c",&option);
       	 	printf("\n\n");
   	} 		
   		while (option=='Y'||option=='y');
		break;
		}
		 
		case 2: 
			{ 
			int no,no1,unit,sum=0,i,fact;
			printf("\nEnter any number:- ");
			scanf("%d",&no);
			no1=no;
			while(no1>0)
			{
				unit=no1%10;
				i=1;
				fact=1;
				while(i<=unit)
				{
					fact*=i;
					i++;
				}
				sum+=fact;
				no1/=10;
			}
			if (sum==no)
			printf("\n%d is strong number",no);
			else 
			printf("\n%d is not strong number",no);
			break;
		}
				case 3:
	{
		int no,num,unit,sum,cube;
		printf("\nEnter any number:- ");
		scanf("%d",&no);
		for (num=no,sum=0;num>0;num/=10)
		{
			unit=num%10;
			cube=unit*unit*unit;
			sum+=cube;
		}
		if(no==sum)
		printf("\nThe number is Armstrong number");
		else
		printf("\nThe number is not an Armstrong number");
		break;
	}
	case 4:
		{
			int i;
			char name [50],option;
			x:
			printf("\n\nEnter your name:\n");
			fflush(stdin);
			gets(name);
			for(i=0;name[i]!='\0';i++);
			{
				printf("%s Your name is %d characters long",name,i);
				printf("\n\n Do you want to continue? <Y/N>:- ");
				fflush(stdin);
				scanf("%c",&option);
       	 		printf("\n\n");
   			} 		
   				if (option=='Y'||option=='y')
   				goto x;
   				else 
				break;
		}
		case 5:
		{
			char name[10][50];
	int i,size,count;
	printf("How many names are to be entered?\n");
	scanf("%d",&size);
	printf("Enter %d names: \n",size);
	for(i=0;i<size;i++)
	{
		fflush(stdin);
		gets(name[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%s has %d vowels\n",name[i],countVowels(name[i]));
	}
		}
			
        	case 0:
			{
				exit (0);
				default:
				printf("Invalid choice\n");
				break;
		    }	
				printf("\n");
	}

	}
		while(1);
}
