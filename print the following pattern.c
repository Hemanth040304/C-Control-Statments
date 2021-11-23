/* print the following pattern */
// 12345
// 1234
// 123
// 12
// 1
#include<stdio.h>
main()
{
    int number,j;
    scanf("%d",&number);
    for(int i=number;i>0;i--)
    {
        j=1;
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
