#include<stdio.h>
#include<string.h>
int isVow(char c)
{
	return (c=='a' ||c=='e' ||c=='i' ||c=='o' ||c=='u' ||c=='A' ||c=='E' ||c=='I' ||c=='O' ||c=='U');
}
int isCons(char c)
{
	return (c>='a' && c<='z' || c>='A' && c<='Z')&&(!isVow(c));
}
void main()
{
	char str[200],*i;
	int v=0,c=0;
	printf("Enter a sentance: ");
	gets(str);
	for(i=str;*i!='\0';i++)
	{
		if(isVow(*i))
			v++;
		else if(isCons(*i))
			c++;
	}
	printf("No. of vowel: %d and consonant: %d",v,c);
}
