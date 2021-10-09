#include<stdio.h>
void main()
{
	//  Sample Result	*
	//              	**
	//					***
	//					**
	//					*
	int i=1,j;
	while(i<=3)
	{
		j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	i=1;
	while(i<=2)
	{
		j=2;
		while(j>=i)
		{
			printf("*");
			j--;
		}
		printf("\n");
		i++;
	}
}
