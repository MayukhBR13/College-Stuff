#include<stdio.h>
struct InchFeet
{
	int feet;
	float inch;	
};
struct InchFeet Add(const struct InchFeet *a,const struct InchFeet *b)
{
	float s=a->inch+b->inch;
	struct InchFeet su={a->feet+b->feet+(int)(s/12),(float)(s-((int)(s/12))*12)};
	return su;
}
void main()
{
	struct InchFeet a,b,c;
	printf("Enter distance(feet-inch) 1:");
	scanf("%d%f",&a.feet,&a.inch);
	printf("Enter distance(feet-inch) 2:");
	scanf("%d%f",&b.feet,&b.inch);
	c=Add(&a,&b);
	printf("Sum is %d'%.2f\"",c.feet,c.inch);
}
