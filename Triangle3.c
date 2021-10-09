#include<stdio.h>
void main()
{
	//  Sample Result	1
	//              	12
	//					123
	//					1234
	//					12345
	int i=1,j,n;
	while(i<=5)
	{
		n=1,j=1;
		while(j<=i)
		{
			printf("%d",n);
			j++,n++;
		}
		printf("\n");
		i++;
	}
}
