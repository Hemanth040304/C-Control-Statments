#include<stdio.h>
void main()
{
	int solders,n=1;
	scanf("%d",&solders);
	while(n*2<=solders)
	{
		n*=2;
	}
	printf("In '%d' solders.\nSolder number '%d' is last to alive.",solders,(solders-n)*2+1);
}
