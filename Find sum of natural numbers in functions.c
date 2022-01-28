#include<stdio.h>
int sum(int number)
{
	int sum=0;
	while(number)
	{
		sum+=number;
		number--;
	}
	printf("%d",sum);
}
int main()
{
	int number;
	scanf("%d",&number);
	sum(number);
}
