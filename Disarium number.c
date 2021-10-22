/* Disarium number */
#include<stdio.h>
void main()
{
	int number,reverse=0,count=0,temp,temp1,r=0,h,disariumNumber=0;
	printf("Enter a number.\n");
	scanf("%d",&number);
	temp1=number;
	while(number)
	{
		reverse=reverse*10+(number%10);
		number/=10;
	}
	while(reverse)
	{
		count++;
		temp=count;
		r=0;
		r=reverse%10;
		reverse/=10;
		h=r;
		while(temp>1)
		{
			r*=h;
			temp--;
		}
		disariumNumber+=r;
	}
	if(temp1==disariumNumber)
	{
		printf("%d is a Disarium Number.\n",temp1);
	}
	else
	{
		printf("%d is not a Disarium Number.\n",temp1);
	}
}
