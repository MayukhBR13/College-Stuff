#include<stdio.h>
#include<string.h>
void main()
{
	char str[200],*i,s;
	int c=0;
	printf("Enter a sentance: ");
	gets(str);
	strlwr(str);
	printf("Search(char): ");
	fflush(stdin);
	scanf("%c",&s);
	for(i=str;*i!='\0';i++)
	{
		if(*i==s)
			c++;
	}
	printf("No. of occurrences of '%c' in '%s' is %d",s,str,c);
}
