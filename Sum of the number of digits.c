#include<stdio.h>
void main()
{
	int number,r,sum=0;
	printf("Entre a number.\n");
	scanf("%d",&number);
	while(number)
	{
		r=number%10;
		sum+=r;
		number=number/10;
	}
	printf("%d",sum);
}
