#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter 2 number: ");
	scanf("%d%d",&a,&b);
	if(a^b)
		printf("%d, %d are not equal",a,b);
	else
		printf("%d, %d are equal",a,b);
}
