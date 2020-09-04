#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	if(a>0)
		printf(" %d is +ve",a);
	else
		printf(" %d is not +ve",a);
}
