/* Mini-Max Sum */
#include<stdio.h>
#include<limits.h>
int main()
{
    long Sum=0;
    int i,min=INT_MAX,max=0,arr[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
        Sum+=arr[i];
    }
    printf("%ld %ld",Sum-max,Sum-min);
}
