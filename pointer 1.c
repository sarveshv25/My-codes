#include<stdio.h>
#include"header.h"
void main()
{
	int i=10,*j,**k;
	j=&j;
	k=&j;
	printf("%d\n",i);
	printf("%u\n",&i);
	printf("%d\n",*(&i));
	printf("%u\n",j);
	printf("%u\n",k);
	printf("%u\n",&k);
	printf("%d\n",**k);
	printf("%u\n",**k);
}
