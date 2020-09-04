#include<stdio.h>
#include<string.h>
void main()
{
	char name[40],*n;
	n=name;
	printf("Enter your first name: ");
	scanf("%s",n);						//first name using ptr
	n+=strlen(n);
	*n=' ';
	++n;
	printf("Enter your last name: ");
	fflush(stdin);
	scanf("%[^\n]",n);					//last name using ptr directly into name
	printf("Name: %s",name);
}
