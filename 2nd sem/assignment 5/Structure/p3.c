#include<stdio.h>
struct complex
{
	float real;
	float img;	
};
struct complex Add(const struct complex *a,const struct complex *b)
{
	struct complex su={a->real+b->real,a->img+b->img};
	return su;
}
void main()
{
	struct complex a,b,c;
	printf("Enter real and img of 1st complex no.:");
	scanf("%f%f",&a.real,&a.img);
	printf("Enter real and img of 2nd complex no.:");
	scanf("%f%f",&b.real,&b.img);
	c=Add(&a,&b);
	printf("Sum is %.2f+%.2fi",c.real,c.img);
}
