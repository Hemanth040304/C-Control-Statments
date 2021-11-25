/* print the following pattern */
// A A A A A 
// B B B B B
// C C C C C
// D D D D D
// E E E E E
#include<stdio.h>
main()
{
    int number,temp;
    scanf("%d",&number);
    for(int i=number,j=65;i>0;i--,j++)
    {
        temp=1;
        for(;temp<=number;temp++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}
