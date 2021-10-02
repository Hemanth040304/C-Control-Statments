#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter a number.\n");
	scanf("%d", &n);
	printf("Enter %d numbers.\n",n);
	while(n>0)
	{
		scanf("%d", &i);
		printf("%d ", i);
		n--;
	}
}
