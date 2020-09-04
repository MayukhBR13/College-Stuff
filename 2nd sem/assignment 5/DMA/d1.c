#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *a,n,i;
	printf("\n Enter the value of n:");
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));//or (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		a[i]=i+1;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	free(a);	
}
