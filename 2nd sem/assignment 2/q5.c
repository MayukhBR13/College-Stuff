#include<stdio.h>
int isLeap(int a)
{
	return (a%4==0&&a%100!=0||a%400==0);
}
int main()
{
	int a,b;
	printf("\n Enter a year");
	scanf("%d",&a);
	if(isLeap(a))
		printf(" %d is leap year",a);
	else
		printf("%d is not leap year",a);
}
