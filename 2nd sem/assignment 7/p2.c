#include<stdio.h>
#include<string.h>
void main()
{
	char f_name[20],l_name[20],address[40];
	printf("Enter your first name: ");
	scanf("%s",f_name);
	printf("Enter your last name: ");
	fflush(stdin);
	scanf("%[^\n]",l_name);
	printf("Enter your address: ");
	fflush(stdin);
	gets(address);
	printf("Name: %s %s\nAddress: %s",f_name,l_name,address);
}
