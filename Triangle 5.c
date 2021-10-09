#include<stdio.h>
void main()
{
	//  Sample Result	*****
	//              	****
	//					***
	//					**
	//					*
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
}
