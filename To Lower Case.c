#include<stdio.h>
void main()
{
	char str[100];
	int i;
	printf("Enter a string.\n");
	scanf("%[^\n]s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
	}
	printf("%s",str);
}
