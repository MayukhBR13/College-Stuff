#include<stdio.h>
void swap(int *a,int *b);
void main()
{
	int m,n;
	printf("Enter m,n: ");
	scanf("%d%d",&m,&n);
	printf("before swap, m=%d,n=%d",m,n);
	swap(&m,&n);
	printf("\nafter swap, m=%d,n=%d",m,n);	
}
void swap(int *a,int *b)
{
	*a+=*b;
	*b=*a-*b;
	*a=*a-*b;
}
