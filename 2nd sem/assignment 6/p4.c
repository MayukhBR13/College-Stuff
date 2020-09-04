#include<stdio.h>
void main()
{
	FILE *fp;
	int a,n,i;
	if((fp=fopen("abc.txt","wb"))==NULL)
	{	
		printf(" File not found! ");
		return;
	}
	printf("Enter a no.: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fwrite(&i,sizeof(int),1,fp);//putw(i,fp)
	}
	fclose(fp);
	if((fp=fopen("abc.txt","rb"))==NULL)
	{	
		printf(" File not found! ");
		return;
	}
	n=fseek(fp,0,SEEK_SET);
	for(i=fseek(fp,-sizeof(int),SEEK_END);i>=n;i=fseek(fp,-(2*sizeof(int)),SEEK_CUR))
	{	
		fread(&a,sizeof(int),1,fp);
		printf("%d ",a);
	}
	
	fclose(fp);


}
