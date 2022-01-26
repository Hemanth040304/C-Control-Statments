/* Palindrome */
#include<stdio.h>
int pal(int n,int x)
{
	x=0;
    while(n)
    {
        x=(x*10)+n%10;
        n/=10;
    }
    return x;
}
int main()
{
    int number,rev=0,temp;
    scanf("%d",&number);
    temp=number;
    rev=pal(temp,rev);
    if(number==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
