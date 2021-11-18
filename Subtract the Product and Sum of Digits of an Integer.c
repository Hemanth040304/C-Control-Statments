/* Subtract the Product and Sum of Digits of an Integer */
#include<stdio.h>
main()
{
    int sum=0,pro=1,number;
    scanf("%d",&number);
    while(number)
    {
        sum+=number%10;
        pro*=number%10;
        number/=10;
    }
    printf("%d",pro-sum);
}
