#include<stdio.h>
void main()
{
	int number,i=1,sum=0;
	printf("Enter a number.\n");
	scanf("%d",&number);
	while(i<number)
	{
		if(number%i==0)
		{
	    sum+=i;
    	}
    	i++;
	}
	printf("sum=%d\n",sum);
	if(number==sum)
	{
		printf("%d is a PERFECT NUMBER.",number);
	}
	else if(number!=sum)
	{
		printf("%d is not a PERFECT NUMBER.",number);
	}
}
