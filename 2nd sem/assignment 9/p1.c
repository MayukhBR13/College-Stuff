#include<stdio.h>
void main()
{
	float sec,ho;
	printf("Enter Time in Seconds:");
	scanf("%f",&sec);
	ho=sec/3600;
	printf("%f Seconds = %f Hours",sec,ho);
}
