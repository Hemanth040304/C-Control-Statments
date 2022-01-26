/* How Many Numbers are Smaller Than the Current Number */
#include<stdio.h>
int small(int *arr,int ele)
{
	int i,j,count=0;
	for(i=0;i<ele;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<ele;i++)
    {
    	count=0;
    	for(j=0;j<ele;j++)
    	{
    		if(arr[i]>arr[j])
    		count++;
		}
		printf("%d ",count);
	}
}
int main()
{
    int ele;
    scanf("%d",&ele);
    int arr[ele];
    small(arr,ele);
}
