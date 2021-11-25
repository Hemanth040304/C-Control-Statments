/* Program to find the given number is Even Number or Odd Number or Mixed Number */
#include<stdio.h>
main()
{
    int number,even=0,odd=0;
    scanf("%d",&number);
    while(number)
    {
        if((number%10)%2==0)
        {
            even++;
        }
        else
        odd++;
        number/=10;
    }
    if(even>=1 && odd==0)
    {
        printf("The Number is Even Number");
    }
    else if(odd>=1 && even==0)
    {
        printf("The Number is Odd Number");
    }
    else
    {
        printf("The Number is Mixed Number");
    }
}
