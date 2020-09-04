#include<stdio.h>
struct time
{
	int hour;
	int minute;
	int second;	
};
struct time sub(const struct time *a,const struct time *b)
{
	int c=(a->second+a->minute*60+a->hour*3600)-(b->second+b->minute*60+b->hour*3600);
	struct time su={c/3600,(c/60)%60,c%60};
	return su;
}
void main()
{
	struct time a,b,c;
	printf("Enter a time(h m s):");
	scanf("%d%d%d",&a.hour,&a.minute,&a.second);
	printf("Enter another time(h m s):");
	scanf("%d%d%d",&b.hour,&b.minute,&b.second);
	c=sub(&a,&b);
	printf("Sub is %dh %dmin %dsec\"",c.hour,c.minute,c.second);
}
