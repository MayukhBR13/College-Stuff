#include<stdio.h>
void main()
{
	FILE *fp;
	int n,i;
	printf("Enter a no.: ");
	scanf("%d",&n);
	if((fp=fopen("abc.txt","wb"))==NULL)
	{	
		printf(" File not found! ");
		return;
	}
	printf("File successfully created... ");
	for(i=1;i<n;i++)
	{
		fwrite(&i,sizeof(int),1,fp);//putw(i,fp)
	}
	fclose(fp);
}
