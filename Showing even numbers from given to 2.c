#include<stdio.h>
void main()
{
	int number;
	printf("Enter the number,it shows the even upto 2\nTake even numbers.\n");
	scanf("%d",&number);
	while(number>1)
	{
	    printf("%d ",number);
		number-=2;	
	}
}
