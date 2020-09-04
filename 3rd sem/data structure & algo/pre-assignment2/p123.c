/*Name:- Mayukh Barman Ray
 Roll No.:-04   ,  CSE  , 2nd Year 
 Assignment-1 
 Q1:-WAP to sort using bubble sort,inserton sort,selection sort*/
#include <stdio.h>
#include <stdlib.h>
//sorting a arr using bubble sort algo
void bubbleSort(int *arr,		//prt to array
				int n)			//no. of element in arr
{
	int i,l,temp;
	
	for(i=0;i<n-1;i++)
	{
		for(l=0;l<n-1-i;l++)
		{
			if(arr[l+1]<arr[l])		//swap if in wrong order
			{
				temp=arr[l];
				arr[l]=arr[l+1];
				arr[l+1]=temp;
			}
		}
	}
}
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

//sorting a arr using selection sort
void selectionSort(int *arr,	//ptr to array
					int n)		//no. of elements
{
	int i,l,t;
	
	for(i=1;i<n;i++)
	{
		t=0;
		for(l=1;l<n-i+1;l++)
		{
			if(arr[l]>arr[t])
				t=l;				
		}
		l=arr[n-i];
		arr[n-i]=arr[t];
		arr[t]=l;
		
	}
}
void main()
{
	int n,*arr;
	int i;
	printf("Enter the total no. of elements");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("Enter %d no.: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	//insertionSort(arr,n);
	bubbleSort(arr,n);
	//selectionSort(arr,n);
	
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	
}
