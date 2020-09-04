#include<stdio.h>
void main()
{
	FILE *fp;
	int n,i,a;
	printf("Enter the no. of element: ");
	scanf("%d",&n);
	if((fp=fopen("input.txt","w"))==NULL)
	{	
		printf(" File not found! ");
		return;
	}
	printf("Enter %d no. ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		fprintf(fp," %d",a);
		if(!ferror(fp))
			printf(" %d",a);
	}
	fclose(fp);
}
