#include<stdio.h>
void main()
{
	int number=1,i,ul;
	printf("Enter the upper limit and value to be incremented by every time\n");
	scanf("%d%d",&ul,&i);
	
	while(number<=ul)
	{
		printf("%d ",number);
		number+=i;
	}
}

