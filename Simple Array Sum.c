/* Simple Array Sum */
#include<stdio.h>
void main()
{
    int input,i,sum=0;
    scanf("%d",&input);
    int arr[input];
    for(i=0;i<input;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%d",sum);
}

