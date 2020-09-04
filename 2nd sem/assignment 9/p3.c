#include<stdio.h>
void main()
{
	int a,m,d;
	printf("Enter a number ");
	scanf("%d",&a);
	m=a<<1;
	d=a>>1;
	printf("%d*2=%d and %d/2=%d",a,m,a,d);
}
