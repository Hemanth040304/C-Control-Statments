#include<stdio.h>
fun(int n)
{
	int even=0,odd=0,temp=1,temp1=1;
	while(n)
	{
		if((n%10)%2==0)
		{
			even=temp*(n%10)+even;
			temp*=10;
		}
		else 
		{
			odd=temp1*(n%10)+odd;
			temp1*=10;
		}
		n/=10;
	}
	printf("%d %d",even,odd);
}
main()
{
	int n;
	scanf("%d",&n);
	fun(n);
}
