#include<stdio.h>
void main()
{
	int i,arr[5],sum=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("%d",sum);
}
