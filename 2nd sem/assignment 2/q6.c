#include<stdio.h>
void horizontalLine(int a)
{
	for(;a>0;a--,printf("_"));
}
int main()
{
	horizontalLine(10);
	printf("\n");
	horizontalLine(40);
}
