#include<stdio.h>
void main()
{
	int productOfdigits=1,sumOfdigits=0,number;
	scanf("%d",&number);
	while(number)
	{
		sumOfdigits+=number%10;
		productOfdigits*=number%10;
		number/=10;
	}
	printf("%d",productOfdigits-sumOfdigits);
}
