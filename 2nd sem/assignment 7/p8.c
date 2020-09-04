#include<stdio.h>
#include<string.h>
void main()
{
	char str[200];
	int i,len,f=0;
	printf("Enter a str.: ");
	scanf("%s",str);
	for(i=0,len=strlen(str);i<=len/2;i++)
	{
		if(str[i]!=str[len-1-i])
			f=1;
	}
	if(f==0)
	printf("'%s' is a palindrome string",str);
	else
	printf("'%s' is not a palindrome string",str);
}
