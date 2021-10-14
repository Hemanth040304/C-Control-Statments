#include<stdio.h>
void main()
{
	int number,sum=0,digit=0;
	printf("Enter a number.\n");
	scanf("%d",&number);
	while(number)
	{
		sum+=number%10;
		number=number/10;
	}
	printf("%d\n",sum);
	while(sum)
	{
		digit+=sum%10;
		sum=sum/10;
	}
	printf("%d",digit);
}
