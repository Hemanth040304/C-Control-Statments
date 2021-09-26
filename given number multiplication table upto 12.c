#include<stdio.h>
void main()
{
	int number1,number2=1;
	printf("Enter the number for multiplication table upto 12.\n");
	scanf("%d",&number1);
	while(number2<=12)
	{
	    printf("%d * %d = %d\n",number1,number2,number1*number2);
		number2++;	
	}
}
