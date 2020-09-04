#include<stdio.h>
void swap(int *x,int *y)
{
	int t=*x;
	*x=*y;
	*y=t;
}
void main()
{
	int a,b;
	printf("Enter 2 no.");
	scanf("%d%d",&a,&b);
	printf("a =%d ,b =%d",a,b);
	swap(&a,&b);
	printf("\nafter swaping, a= %d ,b= %d",a,b);
}
