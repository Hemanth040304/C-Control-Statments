#include<stdio.h>
void main()
{
	int startingOfrange,endOfrange;
	printf("Enter the range for even numbers.\n");
	scanf("%d%d",&startingOfrange,&endOfrange);
	do
	{
		if(startingOfrange%2==0)
		{
			printf("%d ",startingOfrange);
		}
		startingOfrange++;
	}while(startingOfrange<=endOfrange);
}
