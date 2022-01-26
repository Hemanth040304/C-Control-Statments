/* perfect square root or not */
#include<stdio.h>
int squre(int number,int sq)
{
	int i;
	for(i=1;i*i<=number;i++)
    {
        if(i*i==number)
        {
            printf("True");
            sq++;
            break;
        }
    }
    if(sq!=1)
    printf("False");
}
int main()
{
    int number,sq=0;
    scanf("%d",&number);
    squre(number,sq);
}
