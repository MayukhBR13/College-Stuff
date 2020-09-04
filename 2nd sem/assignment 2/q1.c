#include<stdio.h>
#include<math.h>
int ifimg(float a,float b,float c)
{
	return !(b*b-4*a*c<0);
}
int main()
{
	float a,b,c,i,r1,r2;
	printf("\n Enter a,b and c of a quadratic eq. ");
	scanf("%f%f%f",&a,&b,&c);
	if(!ifimg(a,b,c))
	{
		printf(" no real solution ");
		return 0;
	}
	r1=(-b-sqrt(b*b-4*a*c))/(2*a);
	r2=(-b+sqrt(b*b-4*a*c))/(2*a);
	printf(" sol1=%f and sol2=%f",r1,r2);
}
