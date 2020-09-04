#include<stdio.h>
#include<string.h>
char* strtolower(char* a)
{
	char* c=a;
	for(;*a!='\0';a++)
	{
		if(*a>='A' && *a<='Z')
			(*a)+=32;
	}
	return c;
}
char* strtoupper(char* a)
{
	char* c=a;
	for(;*a!='\0';a++)
	{
		if(*a>='a' && *a<='z')
			(*a)-=32;
	}
	return c;
}
void main()
{
	char str[200];
	int i,len,f=0;
	printf("Enter a str.: ");
	gets(str);
	
	printf("%s\n",strtoupper(str));
	printf("%s",strtolower(str));
}
