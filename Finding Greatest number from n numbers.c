#include<stdio.h>
void main()
{
	int i,max=0,n;
	printf("Enter a number.\n");
	scanf("%d",&n);
	printf("Enter %d values.\n",n);
	while(n>0)
	{
		scanf("%d",&i);
	    if(i>max)
	    {
		max=i;
    	}
		n--;
	}
	printf("largest of the given number is %d.",max);
}
