/* Minimum absolute difference between N and a power of 2 */
#include<stdio.h>
void main()
{
	int  inputN,square=2;
	scanf("%d",&inputN);
	while(inputN>=square*2)
	{
		square*=2;
	}
	printf("%d",inputN-square);
}
