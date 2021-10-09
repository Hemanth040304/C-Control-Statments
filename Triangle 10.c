#include<stdio.h>
void main()
{
	int i=1,j;
	while(i<=5)
	{
		j=5;
		while(j>=i)
		{
			printf("*");
			j--;
		}
		printf("\n");
		i++;
	}
	while(i<=10)
	{
		j=5;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}
