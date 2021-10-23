#include<stdio.h>
void main()
{
	int i,j=0,k=0,source[10],even[10],odd[10];
	int temp,temp1;
	printf("Enter ten elements: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&source[i]);
	}
	for(i=0;i<10;i++)
	{
		if(source[i]%2==0)
		{
			even[j]=source[i];
			j++;
		}
		else
		{
			odd[k]=source[i];
			k++;
		}
	}
	printf("Even terms: ");
	for(temp=0;temp<j;temp++)
	{
		printf("%d ",even[temp]);
	}
	printf("Odd terms : ");
	for(temp1=0;temp1<k;temp1++) 
	{
		printf("%d ",odd[temp1]);
	}
}
