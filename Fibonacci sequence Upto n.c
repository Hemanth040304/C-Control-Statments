// Fibonacci Sequence
#include<stdio.h>
void main()
{
	int firstTerm=0,secondTerm=1,nextTerm=0,sequenceUpto;
	printf("Enter a number to show the fabonacci sequence upto the given number.\n");
	scanf("%d",&sequenceUpto);
	printf("%d %d ",firstTerm,secondTerm);
	while(firstTerm+secondTerm<=sequenceUpto) 
	{
		nextTerm=firstTerm+secondTerm;
		printf("%d ",nextTerm);
		firstTerm=secondTerm,secondTerm=nextTerm;
	}
}
