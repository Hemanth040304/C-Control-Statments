#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter range.\n");
	scanf("%d%d",&a,&b);
	while(a<=b)
	{
		temp=a;
		printf("%d ",temp);
		while(temp>1)
		{
			if(temp%2==0)
			{
				temp=temp/2;
			}
			else
			{
				temp=3*temp+1;
			}
			printf("%d ",temp);
		}
		printf("\n");
		a++;
	}
}
