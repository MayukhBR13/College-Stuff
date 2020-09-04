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
	for(i=getc(fp);i!=EOF;i=getc(fp))
	{
		printf("%c",i);
	}	
	
	fclose(fp);
}
