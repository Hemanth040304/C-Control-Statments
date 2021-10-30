#include<stdio.h>
int add(int a,int b)
{
	int c;
	c = a+b;
	return c;
}
void main()
{
	int v1,v2,sum;
	printf("Enter two numbers.\n");
	scanf("%d%d",&v1,&v2);
	sum=add(v1,v2);
	printf("%d",sum);
}
