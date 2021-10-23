#include<stdio.h>
void main()
{
	int i,number[5],digit;
	printf("Enter five elements: ")
	for(i=0;i<5;i++)
	{
		scanf("%d",&number[i]);
	}
	scanf("%d",&digit);
	int found=0;
	for(i=0;i<5;i++)
	{
		if(number[i]==digit)
		{
			printf("%d is there",digit);
			found=1;
			break;
		}
		
	}
		if(found==0)
			printf("%d is not there.",digit);
}
