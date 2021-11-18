/* Find sum of natural numbers */
#include<stdio.h>
main()
{
    int number,sum=0;
    scanf("%d",&number);
    while(number)
    {
        sum+=number;
        number--;
    }
    printf("%d",sum);
}
