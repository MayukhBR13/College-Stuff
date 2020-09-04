#include <stdio.h> 
void bubble_sort(int[],int); 
int main() 
{ 
	int a[50],n,i; 
	printf("How many elements?"); 
	scanf("%d",&n); 
	printf("\nEnter array elements:"); 
	for(i=0;i<n;i++) 
		scanf("%d",&a[i]); 
	bubble_sort(a,n); 
	printf("\nArray after sorting:"); 
	for(i=0;i<n;i++) 
		printf("%d ",a[i]); 
	return 0; 
}
void bubble_sort(int a[],int n) 
{ 
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;	
			}
		}
	} 
}
