/* print the following pattern */
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
#include<stdio.h>
main()
{
    int number,j;
    scanf("%d",&number);
    for(int i=number;i>0;i--)
    {
        j=number;
        for(j=number;j>0;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
