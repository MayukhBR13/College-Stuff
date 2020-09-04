/*Name:- Mayukh Barman Ray
 Roll No.:-04   ,  CSE  , 2nd Year 
 Assignment-2    	Date:25-8-2020
 Q1:-WAP to sort using bubble sort*/
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
	
	bubbleSort(arr,n);
		
	printf("\nAfter sorting.. \n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	
}
