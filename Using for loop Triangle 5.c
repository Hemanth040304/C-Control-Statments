// Using 'for' loop  for triangle problem.
    //  Sample Result	*****
	//              	****
	//					***
	//					**
	//					*
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		j=5;
		for(;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
