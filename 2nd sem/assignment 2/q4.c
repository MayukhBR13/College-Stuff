#include<stdio.h>
int factorial(int a)
{
	int r=1;
	for(;a>0;r*=a--);
	return r;
}
int permutation(int n,int r)
{
	return (factorial(n)/factorial(n-r));
}
int combination(int n,int r)
{
	return permutation(n,r)/factorial(r);
}
int main()
{
	int a,b;
	printf("\n Enter n and r:");
	scanf("%d%d",&a,&b);
	printf(" fact(%d)=%d, permutation=%d and combination=%d",a,factorial(a),permutation(a,b),combination(a,b));
}
