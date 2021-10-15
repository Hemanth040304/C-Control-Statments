#include<stdio.h>
void main()
{
	int startingOfrange,endOfrange;
	printf("Enter the range of numbers.\n");
	scanf("%d%d",&startingOfrange,&endOfrange);
	do
	{
		printf("%d ",startingOfrange);
		startingOfrange++;
	}while(startingOfrange<=endOfrange);
}
