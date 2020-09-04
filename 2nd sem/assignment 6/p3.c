#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp;
	char n[100],c;
	int i;
	if((fp=fopen("abc.txt","wb"))==NULL)
	{	
		printf(" File not found! ");
		return;
	}
	printf("Enter a string: ");
	gets(n);
	i=(strlen(n)+1);
	fwrite(n,(size_t)i*sizeof(char),(size_t)i,fp);
	fclose(fp);
	
	if((fp=fopen("abc.txt","rb"))==NULL)
	{	
		printf(" File not found! ");
		return;
	}
	i=fseek(fp,0,SEEK_END);
	fseek(fp,0,SEEK_SET);
	fread(n,(size_t)i,1,fp);
	printf("%s",n);
	
	fclose(fp);
}
