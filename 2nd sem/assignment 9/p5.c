#include<stdio.h>
#include<string.h>
void PrintName(const char* a,int c)
{
	if(!c)
		return;
	printf("%s\n",a);
	PrintName(a,c-1);
}
void main()
{
	char name[100];
	printf(" Enter your name: ");
	gets(name);
	PrintName(name,10);
}
