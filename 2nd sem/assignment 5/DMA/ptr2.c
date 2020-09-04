#include<stdio.h>
void swap(int *x,int *y)
{
	int t=*x;
	*x=*y;
	*y=t;
}
void BubbleSort(int *a,int size)
{
	int t,i,l;
	for(i=0;i<size-1;i++)
	{
		for(l=0;l<size-1-i;l++)
		{
			if(a[l]>a[l+1])
				swap(&a[l],&a[l+1]);
		}
	}
}
void main()
{
	int *a,n,i;
	printf("\n Enter length of array:");
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));//or (int*)malloc(n*sizeof(int));
	printf("\n Enter %d number:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	BubbleSort(a,n);
	printf("after Bubble Sort:\n");
	for(i=0;i<n;i++)
		printf(" %d",a[i]);
	free(a);	
}
