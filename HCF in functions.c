/* HCF */
#include<stdio.h>
int hcf(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		a=a-b;
		else if(b>a)
		b=b-a;
	}
	return a;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",hcf(a,b));
}
