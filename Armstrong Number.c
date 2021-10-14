#include<stdio.h>
#include<math.h>
void main()
{
	int number,temp,temp1,length=0,u,armstrong=0;
	printf("Enter a number.\n");
	scanf("%d",&number);
	temp=number;
	while(temp)
	{
		temp=temp/10;
		length++;
	}
	temp1=number;
	while(temp1)
	{
		u=temp1%10;
		armstrong+=pow(u,length);
		temp1=temp1/10;
	}
	if(number==armstrong)
	{
		printf("%d is a Armstrong Number.",armstrong);
	}
	else
	{
		printf("%d is not a Armstrong Number.",number);
	}
}
