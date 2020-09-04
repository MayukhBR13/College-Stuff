#include <stdio.h> 
void selection_sort(int[],int); 
int main() 
{ 
	int a[50],n,i; 
	printf("How many elements?"); 
	scanf("%d",&n); 
	printf("\nEnter array elements:"); 
	for(i=0;i<n;i++) 
		scanf("%d",&a[i]); 
	selection_sort(a,n); 
	printf("\nArray after sorting:"); 
	for(i=0;i<n;i++) 
		printf("%d ",a[i]); 
	return 0; 
}
void selection_sort(int a[],int n) 
{ 
	int i,j,imin,t;
	for(i=0;i<n-1;i++)
	{
		imin=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[imin])
			{
				imin=j;	
			}
		}
		t=a[i];
		a[i]=a[imin];
		a[imin]=t;
	} 
}
