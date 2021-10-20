/* fibonacci */
#include<stdio.h>
void main()
{
	int firstNumber=0,secondNumber=1,nextNumber,count;
	printf("Enter a number.\n");
	scanf("%d",&count);
	printf("%d %d ",firstNumber,secondNumber);
	while(count>2)
	{
		nextNumber=firstNumber+secondNumber;
		printf("%d ",nextNumber);
		firstNumber=secondNumber;
		secondNumber=nextNumber;
		count--;
	}
}
