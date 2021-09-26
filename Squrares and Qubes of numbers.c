#include<stdio.h>
void main()
{
	int number1,number2;
	scanf("%d%d",&number1,&number2);
	while(number1<=number2) 
	{
	    printf("%d\t%d\t%d\n ",number1,number1*number1,number1*number1*number1);
		number1++;	
	}
}
