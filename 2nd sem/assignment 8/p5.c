#include<stdio.h>
void main()//don't give any input in command line.so default argc is 1
{
	int a;
	printf("Enter a no.: ");
	scanf("%d",&a);
	a=a>>2;
	printf("%d",a);
}
