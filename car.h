#include<stdio.h>
#include<string.h>
typedef struct cars
{
	int HorsePower,Torque,TopSpeed,Price,i,size;
	char BrandName [50],ModelName [50];
}CARS;

//Accept data
int acceptData(CARS c[])
{
	int i,size;
	printf("How many models you want to enter? <Max 50>:\n");
	scanf("%d",&size);
	printf("\n\nEnter %d records:\n",size);
	for(i=0;i<size;i++)
	{
		printf("\n\nEnter Data of the Car: %d",i+1);
		printf("\n\n----> Enter the Car brand:\n ");
		fflush(stdin);
		gets(c[i].BrandName);
		printf("----> Enter the Model Name:\n ");
		fflush(stdin);
		gets(c[i].ModelName);
		printf("----> Enter the Horse power:\n");
		scanf("%d",&c[i].HorsePower);
		printf("----> Enter the Torque <in nm>:\n ");
		scanf("%d",&c[i].Torque);
		printf("----> Enter Top Speed <in km/hr>:\n ");
		scanf("%d",&c[i].TopSpeed);
		printf("----> Enter the price:\n ");
		scanf("%d",&c[i].Price);
		printf("\n\n");
	}
	return size;
}

//Display function

void showData(CARS c,int i)
{
	printf("\nThe data of Car %d is:\n",i+1);
	printf("\nBrand Name= %s",c.BrandName);
	printf("\nModel Name= %s",c.ModelName);
	printf("\nHorse Power is= %d",c.HorsePower);
	printf("\nThe Top Speed is=%d",c.TopSpeed);
	printf("\nThe Torque is= %d",c.Torque);
	printf("\nThe price is= %d",c.Price);
	printf("\n\n");
}

//Find data by Brand Name

void searchCarByName (CARS c[],int size,char *find )
{
	int i,flag;
	for(i=0,flag=0;i<size;i++)
	{
		if(strcmp(c[i].BrandName,find)==0)
		{
			flag=1;
			showData(c[i],i);
		}
	}
	if(flag==0)
		printf("\n\nNo Car avialable by Brand Name %s\n",find);
}

//Find Data By Model Name

void searchCarByModelName (CARS c[],int size,char *find)
{
	int i,flag;
	for(i=0,flag=0;i<size;i++)
	{
		if (strcmp(c[i].ModelName,find)==0)
		{
			flag=1;
			showData(c[i],i);
		}
	}
	if (flag==0)
	printf("\n\nNo Car is avialable by Model Name %s\n",find);	
}

//Find Data by Horse Power 

void searchCarByHorsePower (CARS c[], int size,int HorsePower)
{
	int i,flag;
	for(i=0,flag=0;i<size;i++)
	{
		if(c[i].HorsePower>=HorsePower)
		{
			flag=1;
			showData(c[i],i);
		}
	}
	if(flag==0)
		printf("\n\nNo Car avialable having %d Horse Power",HorsePower);
}

//Find Data by Top Speed

void searchCarByTopSpeed (CARS c[],int size,int tspeed)
{
	int i,flag;
	for(i=0,flag=0;i<size;i++)
	{
		if(c[i].TopSpeed==tspeed)
		{
			flag=1;
			showData(c[i],i);
		}
	}
	if(flag==0)
		printf("\n\nNo Car avialable having %d Top Speed",tspeed);
}

//To search By Torque

void searchCarByTorque (CARS c[],int size,int tor)
{
	int i,flag;
	for(i=0,flag=0;i<size;i++)
	{
		if(c[i].Torque==tor)
		{
			flag=1;
			showData(c[i],i);
		}
	}
	if(flag==0)
		printf("\n\nNo Car avialable having %d Torque");
}

//To find data by price range

void searchCarByPrice (CARS c[],int size,int p,int u)
{
	int i,flag;
	for(i=0,flag=0;i<size;i++)
	{
		if(c[i].Price==p)
		{
			flag=1;
			showData(c[i],i);
		}
	}
	if(flag==0)
		printf("\n\nNo Car avialable having %d Price");
}



