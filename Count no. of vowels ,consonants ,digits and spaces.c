#include<stdio.h>
void main()
{
	int i,vowels=0,consonants=0,digits=0,white_spaces=0;
	char str[100];
	printf("enter a string.\n");
	scanf("%[^\n]s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			vowels++;
		}
		else if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
		{
			digits++;
		}
		else if(str[i]==' ')
		{
			white_spaces++;
		}
		else if(str[i]>='A' && str[i]<='Z' ||str[i]>='a' && str[i]<='z')
		{
			consonants++;
		}
	}
	printf("Vowels=%d\nConsonants=%d\nDigits=%d\nWhite spaces=%d",vowels,consonants,digits,white_spaces);
}
