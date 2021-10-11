// Using 'for' loop  for triangle problem.
    //  Sample Result	1
	//              	12
	//					123
	//					1234
	//					12345
#include<stdio.h>
void main()
{
	int i,j,n;
	for(i=1;i<=5;i++)
	{
		n=1,j=1;
		for(;j<=i;j++,n++)
		{
			printf("%d",n);
		}
		printf("\n");
	}
}
