#include<stdio.h>
void main()
{
	int number,temp,sum=0,product=1,r;
	printf("Enter a number to know it is Magic Number or not.\n");
	scanf("%d",&number);
	temp=number;
	while(temp)
	{
		r=temp%10;
		sum+=r;
		product*=r;
		temp/=10;
	}
	if(sum==product)
	{
		printf("%d is Magic Number.",number);
	}
	else
	{
		printf("%d is not a Magic Number.",number);
	}
}
