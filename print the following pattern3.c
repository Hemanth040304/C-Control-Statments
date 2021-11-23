/* print the following pattern */
// 1
// 12
// 123
// 1234
#include<stdio.h>
main()
{
    int number,j;
    scanf("%d",&number);
    for(int i=1;i<=number;i++)
    {
        j=1;
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
