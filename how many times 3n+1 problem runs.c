#include<stdio.h>
void main()
{
	int number,i=1;
	printf("Enter a number.\n");
	scanf("%d",&number);
	while(number>1)
	{
		if(number%2==0)
		{
			printf("%d ",number);
			number=number/2;
		}
		else
		{
			printf("%d ",number);
			number=3*number+1;
		}
		i++;
	}
	printf("1\n");
	printf("%d",i-1);
}	
