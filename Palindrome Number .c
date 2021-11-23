/* Palindrome Number */
#include<stdio.h>
main()
{
    int element,number,temp,d;
    scanf("%d",&element);
    while(element)
    {
        scanf("%d",&number);
        if(number<0)
        {
            printf("False\n");
            element--;
            continue;
        }
        temp=number,d=0;
        while(temp)
        {
            d=d*10+(temp%10);
            temp/=10;
        }
        if(temp==0 && d==number)
        {
            printf("True\n");
        }
        else if(temp==0 && d!=number)
        {
            printf("False\n");
        }
        element--;
    }
}
