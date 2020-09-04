#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *a1;
	float *a2;
	char *a3;
	printf("\n Enter the value of int variable:");
	a1=(int*)malloc(sizeof(int));
	scanf("%d",a1);
	printf("\n Enter the value of float variable:");
	a2=(float*)malloc(sizeof(float));
	scanf("%f",a2);
	printf("\n Enter the value of char variable:");
	a3=(char*)malloc(sizeof(char));
	fflush(stdin);
	scanf("%c",a3);
	printf("Value of int= %d, float = %f , char = %c",*a1,*a2,*a3);
	free(a1);
	free(a2);
	free(a3);	
}
