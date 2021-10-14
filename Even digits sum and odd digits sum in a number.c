#include<stdio.h>
void main()
{
	int e_sum=0,o_sum=0,number,r;
	printf("Enter a number.\n");
	scanf("%d",&number);
	while(number)
	{
		r=number%10;
		if(r%2==0)
		{
			e_sum+=r;
		}
		else
		{
			o_sum+=r;
		}
		number/=10;
	}
	printf("e_sum=%d.\no_sum=%d",e_sum,o_sum);
}
