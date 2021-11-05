#include<stdio.h>
void main()
{
	char str[100];
	int length=0,i,j;
	printf("Enter the string.\n");
	scanf("%[^\n]s",&str);
	for(i=0;str[i]!='\0';length++,i++)
	{
	}
	for(j=length-1;j>=0;j--)
	{
		printf("%c",str[j]);
	}
}
