#include<stdio.h>
void main()
{
    int i,digits=0;
    char str[100];
    printf("Enter a string.\n");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++)
    {
	    if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
	    {
			digits++;
	    }
	}
	printf(" Contains %d Digits.",digits);
}
