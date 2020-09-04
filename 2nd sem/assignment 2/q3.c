#include<stdio.h>
int pow(int a,int p)
{
	int r=1;
	for(;p>0;p--,r*=a);
	return r;
}
int main()
{
	int a,b;
	printf("\n Enter a no. and pow:");
	scanf("%d%d",&a,&b);
	printf(" %d^%d=%d",a,b,pow(a,b));
}
