#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *a,n,i,sum=0;
	printf("\n Enter array length:");
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));//or (int*)malloc(n*sizeof(int));
	printf("\n Enter %d number:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		sum+=a[i];
	printf(" sum of ");
	for(i=0;i<n;i++)
		printf(" %d",a[i]);
	printf(" is: %d",sum);
	free(a);	
}
