#include<stdio.h>
void main()
{
	int firstTerm=0,secondTerm=1,nextTerm=0,terms;
	printf("Enter how many terms of sequence you want.\n");
	scanf("%d",&terms);
	if(terms<=1)
	{
		printf("%d ",firstTerm);
	}
	else if(terms<=2)
	{		
		printf("%d %d ",firstTerm,secondTerm);
	}
	else if(terms>2)
	{
		printf("%d %d ",firstTerm,secondTerm);
	}
	while(terms>2)
	{
		nextTerm=firstTerm+secondTerm;
		printf("%d ",nextTerm);
		firstTerm=secondTerm;
		secondTerm=nextTerm;
		terms--;
	}
}
