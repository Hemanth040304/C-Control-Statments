/* Spy Number */
#include<stdio.h>
main()
{
    int number,number2,sum=0,pro=1;
    scanf("%d",&number);
    while(number)
    {
        scanf("%d",&number2);
        number--;
        sum=0,pro=1;
        while(number2)
        {
            sum+=number2%10;
            pro*=number2%10;
            number2/=10;
        }
        if(sum==pro)
        {
            printf("Spy Number\n");
        }
        else 
        {
            printf("Not Spy Number\n");
        }
    }
}
