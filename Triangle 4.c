#include<stdio.h>
void main()
{
	//  Sample Result	1
	//              	23
	//					456
	//					78910
	int i=1,j,n=1;
	while(i<5)
	{
		j=1;
		while(j<=i)
		{
			printf("%d",n);
			j++,n++;
		}
		printf("\n");
		i++;
	}
}
