/* Mini-Max Sum */
#include<stdio.h>
int main()
{
    long long minSum=0,maxSum=0,i,min=0,max=0,arr[5];
    for(i=0;i<5;i++)
    {
        scanf("%lld",&arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<arr[i+1])
        {
            if(i==0)
            {
                min=arr[i];
            }
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
        minSum+=arr[i];
        maxSum+=arr[i];
    }
    printf("%lld %lld",minSum-max,maxSum-min);
}

