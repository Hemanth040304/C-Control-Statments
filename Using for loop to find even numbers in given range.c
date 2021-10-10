// Using for loop to printing even number in given range.
#include<stdio.h>
void main()
{
	int startingOfrange,endingOfrange;
	printf("Enter the range.\n");
	scanf("%d%d",&startingOfrange,&endingOfrange);
	for(;startingOfrange<=endingOfrange;startingOfrange++)
	{
		if(startingOfrange%2==0)
		{
			printf("%d ",startingOfrange);
		}
	}
}
