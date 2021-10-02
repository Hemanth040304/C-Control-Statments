#include<stdio.h>
void main()
{
	int i,min=100000,n;
	printf("Enter a number.\n");
	scanf("%d",&n);
	printf("Enter %d values.\n",n);
	while(n>0)
	{
		scanf("%d",&i);
	    if(i<min)
	    {
		min=i;
    	}
		n--;
	}
	printf("Smallest of the given number is %d.",min);
}
