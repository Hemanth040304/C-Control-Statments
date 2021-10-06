#include<stdio.h>
void main()
{
	int n,k,v;
	scanf("%d%d",&n,&k);
	while(n)
	{
		scanf("%d",&v);
		n--;
		if(v==k)
		{
			break;
		}
	}
	if(v==k)
	{
		printf("\nPresent.");
	}
	else
	{
		printf("\nAbssent.");
	}
}
		
