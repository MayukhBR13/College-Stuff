#include<stdio.h>
void main()
{
	FILE *fp;
	int n,i,l,*a,t;
	if((fp=fopen("input.txt","r"))==NULL)
	{	
		printf(" File not found! ");
		return;
	}
	fseek(fp,0,SEEK_END);
	a=(int*)malloc(sizeof(int)*(ftell(fp))/2);//max array size
	fseek(fp,0,SEEK_SET);
	for(i=0;!feof(fp);i++)
		fscanf(fp,"%d",&a[i]);
	n=i;
	fclose(fp);
	for(i=0;i<n-1;i++)
	{
		for(l=0;l<n-1-i;l++)
		{
			if(a[l]>a[l+1])
			{
				t=a[l];
				a[l]=a[l+1];
				a[l+1]=t;
			}
		}
	}		
	
	if((fp=fopen("output.txt","w"))==NULL)
	{	
		printf(" File 2 not found! ");
		return;
	}
	for(i=0;i<n;i++)
	{
		fprintf(fp,"%d ",a[i]);
		if(!ferror(fp))
			printf("%d ",a[i]);
	}
	fclose(fp);
}
