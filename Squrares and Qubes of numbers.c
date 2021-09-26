#include<stdio.h>
void main()
{
	int number1,number2;
	printf("Enter two numbers.\n");
	scanf("%d%d",&number1,&number2);
	if(number1<=number2)
	{
		while(number1<=number2) 
	        {
	          printf("%d\t%d\t%d\n ",number1,number1*number1,number1*number1*number1);
		  number1++;	
	        }
	}
	else
		printf("number1 should be less than number2");
}
