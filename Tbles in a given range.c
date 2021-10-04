#include<stdio.h>
void main()
{
	int number1,number2,number3;
	printf("Enter Range for multiplication table upto 12.\n");
	scanf("%d%d",&number1,&number2);
	while(number1<=number2)
	{
		number3=1;
		while(number3<=12)
    	{
	    	printf("%d * %d = %d\n",number1,number3,number1*number3);
	    	number3++;	
	    }
	    printf("\n");
	    number1++;
	}
	
}
