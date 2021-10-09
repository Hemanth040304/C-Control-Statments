#include<stdio.h>
void main()
{
	//  Sample Result	1
	//              	22
	//					333
	//					4444
	//					55555
	int i=1,j,n=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("%d",n);
			j++;
		}
		printf("\n");
		i++,n++;
	}
}
