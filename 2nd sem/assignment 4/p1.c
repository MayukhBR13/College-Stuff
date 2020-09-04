#include<stdio.h>
int sum(int *a,int *b);
void main()
{
	int a,b,s;
	printf("Enter 2 number: ");
	scanf("%d%d",&a,&b);
	s=sum(&a,&b);
	printf("sum of %d and %d is %d",a,b,s);
}
int sum(int *a,int *b)
{
	return (*a+*b);
}
