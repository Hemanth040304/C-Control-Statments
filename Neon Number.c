/* Neon Number */
#include<stdio.h>
void main()
{
	int number,square,temp,r,sum=0;
	scanf("%d",&number);
	square=number*number,temp=square;
	while(temp)
	{
		r=temp%10;
		sum+=r;
		temp/=10;
	}
	if(number==sum)
	{
		printf("Neon Number.\n");
	}
	else
	{
		printf("Not Neon Number.\n");
	}
}

