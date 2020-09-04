/*Name:- Mayukh Barman Ray
 Roll No.:-04   ,  CSE  , 2nd Year 
 Assignment-3 			Date: 2-9-2020
 Q1:-WAP to sort using merge sort*/
#include <stdio.h>
#include <stdlib.h>
//sorting a arr using merge sort algo
void mergeSort(int *arr,		//prt to array
				int n)			//no. of element in arr
{
	int mid=n/2;
	
	if(n<=1)
		return;
		
	mergeSort(arr,mid);
	mergeSort(arr+mid,n-mid);
	
	merge(arr,0,mid-1,n-1);	
}

void merge(int *arr,				//prt to array
			int st,					//first index of first half array
			int mid,				//last index of first half array
			int end)				//last index of second half array
{
	int i,l,j,d=mid-st;
	int *t;
	
	//store first half in temp array t
	t=(int*)malloc(d*sizeof(int));
	for(i=0;i<=d;i++)
		t[i]=arr[st+i];
	
	for(j=st,i=0,l=mid+1;i<=d && l<=end;j++)	//i,l,j for 1st half,2nd half,merged array
		arr[j]=(t[i]<arr[l])?t[i++]:arr[l++];
	
	while(i<=d)
		arr[j++]=t[i++];

	while(l<=end)
		arr[j++]=arr[l++];
		
	free(t);
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
	
	mergeSort(arr,n);
		
	printf("\nAfter sorting... \n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	
}
