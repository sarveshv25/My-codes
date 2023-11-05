#include<stdio.h>
#include <stdlib.h>
#include "car.h" 
void main ()
{
	CARS c[50];
	char find[50];
	int i,size,choice,HorsePower,Torque,TopSpeed,Price;
	long lp,up;
	
	size=acceptData(c);
	printf("-----> The Data of the Car is as follows <-----");
	for(i=0;i<size;i++)
	{
		showData(c[i],i);
	}
	do
	{
		printf("\n\n");
		printf("-----> MENU <-----");
		printf("\n1.=Search Car by Brand Name: ");
		printf("\n2.=Search Car by Model Name: ");
		printf("\n3.=Search Car by Horse Power: ");
		printf("\n4.=Search Car by Top Speed: ");
		printf("\n5.=Search Car by Price Range: ");
		printf("\n0.=Exit Application");
		
		printf("\n\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				printf("\n\n-----> Search Car by Brand Name <-----");
				printf("\nEnter Brand Name to find the Car: ");
				fflush(stdin);
				gets(find);
				searchCarByName(c,size,find);
				break;
			}
			case 2:
			{
				printf("\n\n-----> Search Car By Model Name <-----");
				printf("\nEnter Model to find the Car: ");
				fflush(stdin);
				gets(find);
				searchCarByModelName(c,size,find);
				break;
			}
			case 3:
			{
				printf("\n\n-----> Search Car By Horse Power <-----");
				printf("\nEnter the Horse Power: ");
				scanf("%d",&HorsePower);
				searchCarByHorsePower(c,size,HorsePower);
				break;
			}
			case 4:
			{
		    	printf("\n\n-----> Search Car by Top Speed <-----");
				printf("\nEnter the Top Speed: ");
				scanf("%d",&TopSpeed);
				searchCarByTopSpeed(c,size,TopSpeed);
				break;
			}
			case 5:
			{
				printf("\n\n-----> Search Car By Price Range <-----");
				printf("\nEnter a price range to find the Car <e.g. 120000-500000> : ");
				scanf("%ld%ld",&lp,&up);
				searchCarByPrice (c, size, lp, up);		
				break;
			}
			case 0:
			{
				exit(0);
			break;
			}
			default:
				printf("\n\nInvalid Choice");				
				
				printf("\n\n");
		}	
	}while (1);
}

