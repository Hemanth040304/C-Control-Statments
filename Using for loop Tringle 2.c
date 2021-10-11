// Using 'for' loop  for triangle problem.
    //					1
	//              	22
	//	Sample Result	333
	//					4444
	//					55555
#include<stdio.h>
void main()
{
	int i,j,n=1;
	for(i=1;i<=5;i++,n++)
	{
		j=1;
		for(;j<=i;j++)
		{
			printf("%d",n);
		}
		printf("\n");
	}
}	
