#include <stdio.h>
int acceptArray(int a[])
{
	int i,s;
	printf("Enter array size: ");
	scanf("%d",&s);
	printf("Enter %d numbers: ",s);
	for(i=0;i<s;i++)
	scanf("%d",&a[i]);
	return s;
	}



void sortAscending(int a[],int s)
	{
		int i,j,temp;
		for(i=0;i<s-1;i++)	
		{
			for (j=i+1;j<s;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
	}
	
	
void display(int a[],int s)
					{
					 int i;
					 for(i=0;i<s;i++)
					 {
					 	printf("%d ",a[i]);
					 }
						
				    }
						


void transpose(int a1[][5],int a2[][5],int r,int c)
{
	int i,j;
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		a2[j][i]=a1[i][j];	
	} 
}





void strCopy(char n[],char n1[])
{
	int i;
	for(i=0;n[i]!='\0';i++)
	n1[i]=n[i];
	n[i]='\0';
	
}



void strReverse(char n[])
{
	char temp;
	int i,j;
	for(j=0;n[j]!='\0';j++);
	for(i=0,--j;i<j;i++,j--)
	{
		temp=n[i];
		n[i]=n[j];
		n[j]=temp;
	}
}
 
 
 
 
 int checkPallindrome (char n[])
{
	int i,j,flag;
	
	for(j=0;n[i]!='\0';j++);
	for(i=0,flag=0,--j;i<j;i++,j--)
	{
		if(n[i]!=n[j])
		{
			flag=1;
			break;
		}
	
	}
	return flag;
}





//string concatenate 
void concatenate(char n[],char s[])
{
	int i,j;
	for(i=0;n[i]!='\0';i++);
	n[i++]=' ';
	for (j=0;s[j]!='\0';i++,j++)
	n[i]=s[j];
	n[i]='\0';
}



//convert to upper 
void convertToUpper(char n[])
{
	int i;
	for (i=0;n[i]!='\0';i++)
	{
		if(n[i]>=97 && n[i]<=122)
		n[i]-=32;
	}
}



// convert to sentence

 void convertToSentence(char n[])
    {
     int i,j;   	
     if(n[0]>=97&&n[0]<=122)
     {
       n[0]-=32;	    	
     } 
      for(i=1;n[i]!='\0';i++)
	  {   	
	    if(n[i]>=65&&n[i]<=90&&i!=j)
	    n[i]+=32;
	    else if(n[i]=='.'&&n[i+1]>=97&&n[i+2]<=122)
	    {
	     j=i+1;
	     n[j]-=32;
	    }
	  } 
    }
	 //check substring
	  
	  
	  int checkSubString(char s[],char f[])
{
	int i,j,k,flag=0;
	for(i=0;s[i]!='\0';i++)
	{
		for(j=0,k=i;f[j]='\0';j++)
		{
			if(s[k]!=f[j])
			break;
			else
			k++;
		}
		if (f[j]=='\0')
		{
			flag=1;
			break;
		}
	}
	return flag;
}




//string vowel 
int countVowels(char s[])
{
	int i,count;
	for(i=0,count=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
		count++;
	}
	return count;
}





//2 D string accept and display

void Display(char n[] [50],int s)
{
	int i;
	printf("\nThe names are:\n");
	for(i=0;i<s;i++)
	{
		puts(n[i]);
	}
}



//show email by domain

/*void showEmailByDomain(char e[][50],char d[],int s)
{
	int i;
	printf("\nThe E-mails by %s domain are: \n",d);
	for(i=0;i<s;i++)
	{
		if(strstr(e[i],d)!=NULL)
		puts(e[i]);
	}
}
*/

//factorial 

void calFact(int n,int *f)
{
	int i=1;
	while(i<=n)
	{
		*f*=i;
		i++;
	}
}



// math calculations

void calMath(int n1,int n2,int *a,int *s,int *m,float *d)
{
	*a=n1+n2;
	*s=n1-n2;
	*m=n1*n2;
	*d=(float)n1/n2;
}

//swapping values

void swap(int *n1,int *n2)
{
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}

//pointer prime number

void calPrime(int n,int *f)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			*f=1;
			break;
		}
		

	}
}



//pointer display function

void pointDisplay (int *a,int s)
{
	int i;
	printf("\nThe array is :");
	for(i=0;i<s;i++)
	{
		printf("%d",*(a+i));
	}
}




