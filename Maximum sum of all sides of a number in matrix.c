#include<stdio.h>
int main()
{
	int n,sum,max=0,i,j;
	scanf("%d",&n);
	int arr[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			if(i!=0 && j!=0 && i!=n-1 && j!=n-1)
			{
				sum=arr[i-1][j]+arr[i][j-1]+arr[i+1][j]+arr[i][j+1]+arr[i-1][j-1]+arr[i+1][j+1]+arr[i+1][j-1]+arr[i-1][j+1];
			}
		}
		if(max<sum)
		max=sum;
	}
	printf("%d",sum);
}
