/* Reverse Integer */
#include<stdio.h>
void main()
{
	int number,reverse=0;
	scanf("%d",&number);
	while(number)
	{
		reverse=reverse*10+(number%10);
		number/=10;
	}
	printf("%d",reverse);
}
