// Using 'for' loop  for triangle problem.
	//  Sample Result	1
	//              	23
	//					456
	//					78910
#include<stdio.h>
void main()
{
	int i,n,j;
	for(i=1,n=1;i<5;i++)
	{
		for(j=1;j<=i;j++,n++)	
		{
			printf("%d",n);
		}
		printf("\n");
	}		
}
