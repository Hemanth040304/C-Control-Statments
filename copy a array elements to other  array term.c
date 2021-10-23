#include<stdio.h>
void main()
{
	int i,source[5],target[5];
	printf("Enter five elements: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&source[i]);
	}
	for(i=0;i<5;i++)
	{
		target[i]=source[i];
		printf("%d",target[i]);
	}
}
