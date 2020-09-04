#include<stdio.h>
int* max(int *a,int *b,int *c);
void main()
{
	int a,b,c,*m;
	printf("Enter 3 number: ");
	scanf("%d%d%d",&a,&b,&c);
	m=max(&a,&b,&c);
	printf(" max = %d ",*m);
}
int* max(int *a,int *b,int *c)
{
	return (*a>*b && *a>*c)?a:(*b>*c)?b:c;
}
