/* C Program of squares from given number to 1 */
#include<stdio.h>
void main()
{
	int number;
	scanf("%d",&number);
	while(number >0) 
	{
	    printf("%d\t%d\n ",number,number*number);
		number--;	
	}
}
