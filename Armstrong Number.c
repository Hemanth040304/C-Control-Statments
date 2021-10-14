#include<stdio.h>
#include<math.h>
void main()
{
	int number,temp,reverse=0,length=0,r,u,armstrong=0;
	printf("Enter a number.\n");
	scanf("%d",&number);
	temp=number;
	while(temp)
	{
		r=temp%10;
		reverse=reverse*10+r;
		temp=temp/10;
		length++;
	}
	while(reverse)
	{
		u=reverse%10;
		armstrong+=pow(u,length);
		reverse=reverse/10;
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
