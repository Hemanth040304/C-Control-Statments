/*
    "Wrong Scorecard"

Given an array that consists of scores of the.
but there is a problem that they did a mistake in maintaining scores,
they gave 6 instead 9, 9 instead of 6.
find the correct sum of the total scores of all batsmen.

Sample input:
100 169 261 196 126

sample output:
885

Explanation: The correct scores sum is 100+196+291+169+129=885
*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,sum=0,x,c=0,temp=0,rev=0;
	for(i=0;i<n;i++)
	{
		c=0;
		scanf("%d",&a[i]);
		x=a[i];
		while(x)
		{
			if(x%10==6||x%10==9)
			{
				c++;
			}
			x/=10;
		}
		if(c==0)
		sum+=a[i];
		else
		{
			temp=0,rev=0;
			while(a[i])
			{
				if(a[i]%10==6)
				rev=rev*10+9;
				else if(a[i]%10==9)
				rev=rev*10+6;
				else
				{
					rev=rev*10+(a[i]%10);
				}
				a[i]/=10;
			}
			while(rev)
			{
				temp=(temp*10)+(rev%10);
				rev/=10;
			}
			sum+=temp;
		}
	}
	printf("%d",sum);
}
