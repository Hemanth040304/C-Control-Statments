#include<stdio.h>
int is_prime(int n)
{
	int j,fact=0;
	for(j=1;j<=n;j++)
	{
		if(n%j==0)
		{
			fact++;
		}
	}
	if(fact==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

main()
{
	int ch, a, b, i, n, j, k;
	while(1)
	{
		printf("Enter your choice:\n1. To check if a number is prime\n2.To print the prime numbers in a given range\n3. To find the composite numbers in range.\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter a number to check:");
				scanf("%d", &n);
				if(is_prime(n))
				{
					printf("%d is a prime number\n", n);
				}
				else
				{
					printf("%d is not a prime number\n", n);
				}
				break;
				
			case 2:
				printf("Enter two numbers:");
				scanf("%d%d", &a, &b);
				for(i=a;i<=b;i++)
				{
					if(is_prime(i))
					{
						printf("%d ", i);
					}
				}
			case 3:
				printf("Enter two number.\n");
				scanf("%d%d",&j,&k);
				for(i=j;i<=k;i++)
				{
					if(!is_prime(i))
					{
						printf("%d",i);
					}
				}
				break;
		}
	}
}
