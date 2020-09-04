#include<stdio.h>
int stringLength(const char *str)
{
	int len;
	for(len=0;str[len]!='\0';len++);
	return len;
}
void main()
{
	char a[100];
	printf("Enter a str.. ");
	gets(a);
	printf("length of \"%s\" is %d",a,stringLength(a));
}
