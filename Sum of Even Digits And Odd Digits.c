/* Sum of Even Digits and Odd Digits */
#include<stdio.h>
void main()
{
	int input,i,evenSum=0,oddSum=0;
	printf("Enter no.of input.\n");
	scanf("%d",&input);
	int arr[input];
	for(i=0;i<input;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			evenSum+=arr[i];
		}
		else
		{
			oddSum+=arr[i];
		}
	}
	printf("Even Digits Sum = %d,\n",evenSum);
	printf("Odd Digits Sum = %d.",oddSum);
}
