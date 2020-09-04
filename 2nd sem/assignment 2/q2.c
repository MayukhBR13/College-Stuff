#include<stdio.h>
char toupper(char c)
{
	return (c>='a' && c<='z')?c-32:c;
}
char tolower(char c)
{
	return (c>='A' && c<='Z')?c+32:c;
}
int main()
{
	char a;
	printf("\n Enter a char:");
	scanf("%c",&a);
	printf(" UpCase=%c and LowerCase=%c",toupper(a),tolower(a));
}
