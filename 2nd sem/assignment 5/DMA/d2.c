#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *a,n,i,max;
	printf("\n Enter the value of n:");
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));//or (int*)malloc(n*sizeof(int));
	printf("\n Enter %d number:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1,max=*a;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf(" max : %d",max);
	free(a);	
}
