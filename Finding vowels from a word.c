#include<stdio.h>
void main()
{
	char str[100];
	int i=0;
	printf("Enter your name.\n");
	scanf("%s",&str);
	while(str[i] != '\0')
	{
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' )
		{
			printf("%c",str[i]);
		}
		i++;
	}
}
