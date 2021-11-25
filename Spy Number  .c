/* Spy Number */
#include<stdio.h>
main()
{
    int number,sum=0,product=1;
    scanf("%d",&number);
    while(number)
    {
        sum+=number%10;
        product*=number%10;
        number/=10;
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    else 
    {
        printf("Not Spy Number");
    }
}
