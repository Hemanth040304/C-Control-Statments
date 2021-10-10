// Using for loop to print multiplication table in given range.
#include<stdio.h>
void main()
{
	int startingOfrange,endingOfrange,i;
	printf("Enter the range for tables.\n");
	scanf("%d%d",&startingOfrange,&endingOfrange);
	for(;startingOfrange<=endingOfrange;startingOfrange++)
	{
		int j=1;
		for(;j<=12;j++)
		{
			printf("%d * %d = %d\n",startingOfrange,j,startingOfrange*j);
		}
		printf("\n");
	}
}
