#include<stdio.h>
void main()
{
	int *a,a1=12;
	float *b,b1=90.34f;
	char *c,c1='d';
	a=&a1;
	b=&b1;
	c=&c1;
	printf(" a=%u , *a=%d ,&a1=%u , a1=%d \n",a,*a,&a1,a1);
	printf(" c=%u , *c=%c ,&c1=%u , c1=%c \n",c,*c,&c1,c1);
	printf(" b=%u , *b=%f ,&b1=%u , b1=%f \n",b,*b,&b1,b1);

}
