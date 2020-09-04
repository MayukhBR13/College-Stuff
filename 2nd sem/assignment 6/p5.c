#include<stdio.h>
void main()
{
	FILE *fp;
	char i;
	if((fp=fopen("abc.txt","r"))==NULL)
	{	
		printf(" File not found! ");
		return;
	}
	printf("File opened successfully");	
	fclose(fp);
}
