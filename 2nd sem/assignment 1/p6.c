#include<stdio.h>
int GCD(int a,int b)
{
	int i,l=1,mn=(a<b)?a:b;
	for(i=1;i<=mn;i++)
		if(a%i==0 && b%i==0)
			l=i;
	return l;
}
int LCM(int a, int b)
{
	return a*b/GCD(a,b);
}
int main()
{
	int a,b;
	printf("Enter 2 numbers: ");
	scanf("%d%d",&a,&b);
	printf("LCM is %d \nGCD is %d",LCM(a,b),GCD(a,b));
	
}
