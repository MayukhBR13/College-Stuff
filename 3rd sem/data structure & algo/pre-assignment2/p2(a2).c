/*Name:- Mayukh Barman Ray
 Roll No.:-04   ,  CSE  , 2nd Year 
 Assignment-2     	Date:25-8-2020
 Q2:-WAP to sort using insertion sort*/
#include <stdio.h>
#include <stdlib.h>
//sorting a arr using insertion sort
void insertionSort(int *arr,	//ptr to array
					int n)		//no. of elements
{
	int i,l,t;
	for(i=1;i<n;i++)
	{	
		t=arr[i];
		for(l=i;l>0 && arr[l-1]>t;l--)
			arr[l]=arr[l-1];
		arr[l]=t;
	}
}


void main()
{
	int n,*arr;
	int i;
	printf("Enter the total no. of elements ");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("Enter %d no.: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	insertionSort(arr,n);
		
	printf("\nAfter sorting.. \n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	
}
