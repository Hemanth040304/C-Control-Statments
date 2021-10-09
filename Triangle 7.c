#include<stdio.h>
void main()
{
	//  Sample Result	12345
	//              	1234
	//					123
	//					12
	//					1
	int i=1,j,n;
	while(i<=5)
	{
		n=1,j=5;
		while(j>=i)
		{
			printf("%d",n);
			j--,n++;
		}
		printf("\n");
		i++;
	}
}
