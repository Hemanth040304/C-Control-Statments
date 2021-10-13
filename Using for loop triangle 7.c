// Using for loop for tirangle problem
	//  Sample Result	12345
	//              	1234
	//					123
	//					12
	//					1
#include<stdio.h>
void main()
{
	int i=1,j,n;
	for(i=1;i<=5;i++)
	{
		for(j=5,n=1;j>=i;n++,j--)
		{
			printf("%d",n);
		}
		printf("\n");
	}
}
