/*Name:- Mayukh Barman Ray
 Roll No.:-04   ,  CSE  , 2nd Year 
 Assignment-4 			Date: 9-9-2020
 Q1. WAP in C to implement Quick sort.*/
 
 void quickSort(int *arr,		//ptr to the array
 				int l,			//left index of the partition
				int r)			//right index of the partition
{
	int i;
	
	if(l<r)
	{
		i=partition(arr,l,r);
		
		quickSort(arr,l,i-1);
		quickSort(arr,i+1,r);
	}	
}
int partition(int *arr,int l,int r)
{
	int pivot=arr[l],pl=l,temp;
	
	
		
	l=l+1;
	while(l<=r)
	{
		while(arr[l]<pivot)
			l++;
			
		while(arr[r]>=pivot && r!=pl)
			r--;
			
		if(l<r)
		{
			temp=arr[l];
			arr[l]=arr[r];
			arr[r]=temp;
		
			l++;
			r--;
		}
	}
	arr[pl]=arr[r];
	arr[r]=pivot;
	
	return r;
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
	
	quickSort(arr,0,n-1);
		
	printf("\nAfter sorting... \n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	
}
