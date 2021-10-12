#include<stdio.h>
void main()
{
	int firstTerm=0,secondTerm=1,nextTerm=0,term;
	printf("Enter a number to that term of Fibanacci Sequence.\n");
	scanf("%d",&term);
	if(term==1)
	{
		printf("%d",firstTerm);
	}
	else if(term==2)
	{
		printf("%d",secondTerm);
	}
	else if(term>2)
	{
		while(term>2)
		{
			nextTerm=firstTerm+secondTerm;
			firstTerm=secondTerm,secondTerm=nextTerm;
			term--;
		}
		printf("%d",nextTerm);
	}
}
