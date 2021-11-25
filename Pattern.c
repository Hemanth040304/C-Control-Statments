/* Pattern */
// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5
#include<stdio.h>
main()
{
    int number,temp;
    scanf("%d",&number);
    for(int i=number,j=1;i>0;i--,j++)
    {
        temp=1;
        for(;temp<=number;temp++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
