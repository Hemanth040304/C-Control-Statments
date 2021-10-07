#include<stdio.h>
void main()
{
	int a,b,choice1,choice2,n;
	printf("How many Operrations you want.\nEnter in Number.\n");
	scanf("%d",&n);
	while(n)
	{
		printf("Enter two numbers.\n");
		scanf("%d%d",&a,&b);
		printf("Enter\n1. Arithmetic\n2. Relational\n3. Bitwise\n");
		scanf("%d",&choice1);
		switch(choice1)
		{
			case 1:
				printf("\nEnter\n1. Addition\n2. Subtraction\n3. Multiplicaton\n4. Divison\n5. Modulo Division\n");
				scanf("%d",&choice2);
				switch(choice2)
				{
					case 1:
						printf("%d + %d = %d\n",a,b,a+b);
						break;
					case 2:
						printf("%d - %d = %d\n",a,b,a-b);
						break;
					case 3:
						printf("%d * %d = %d\n",a,b,a*b);
						break;
					case 4:
						printf("%d / %d = %d\n",a,b,a/b);
						break;
					case 5:
						printf("%d %% %d = %d\n",a,b,a%b);
						break;
					default:
						printf("Invalid Input\n");
						break;
				}
				break;
			case 2:
				printf("\nEnter\n1. Greater Than\n2. Less Than\n3. Equals to\n4. Not Equal to\n");
				scanf("%d",&choice2);
				switch(choice2)
				{
					case 1:
						printf("%d > %d is %d\n",a,b,a>b);
						break;
					case 2:
					    printf("%d < %d is %d\n",a,b,a<b);
					    break;	
					case 3:
						printf("%d == %d is %d\n",a,b,a==b);
						break;
					case 4:  
					    printf("%d != %d is %d\n",a,b,a!=b);
					    break;
					default:
					    printf("Invalid Input\n");
					    break;
				}
				break;
			case 3:
				printf("Enter\n1. Bitwise AND\n2. Bitwise OR\n3. Bitwise XOR\n");
				scanf("%d",&choice2);
				switch(choice2)
				{
					case 1:
						printf("%d & %d = %d\n",a,b,a&b);
						break;
					case 2:
					    printf("%d | %d = %d\n",a,b,a|b);
					    break;
					case 3:
					    printf("%d ^ %d = %d\n",a,b,a^b);
					    break;
					default:
					    printf("Invalid Input\n");
					    break;
				}
				break;
			default:
			    printf("Invalid Input\n");
				break;	
		}
		n--;
	}
}
