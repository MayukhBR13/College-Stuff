/*Name:- Mayukh Barman Ray
 Roll No.:-04   ,  CSE  , 2nd Year 
 Assignment-1     	Date:18-8-2020
 Q1:-WAP to find a number using binary search*/
 #include<stdio.h>
 #include<stdlib.h>
 int sort(int *a,int n)	//bubble sort
 {
 	int i,l,t;
 	for(i=0;i<n-1;i++)
 	{
 		for(l=0;l<n-1-i;l++)
 		{
 			if(a[l]>a[l+1])
 			{
 				t=a[l+1];
 				a[l+1]=a[l];
 				a[l]=t;
			}
		}
	}
 }
 int binary_search(int *a,int n,int num)
 {
 	int l=0,u=n-1,i;
 	
	while(l<=u)
 	{
 		i=l+(u-l)/2;
 		if(a[i]==num)
			return i;			//returning sorted position
		else if(a[i]>num)
			u=i-1;
		else		
			l=i+1;	
	}
	return -1;			//not found
 }
 int main()
 {
 	int *a,n,s;
 	int i;
 	printf("Enter the no. of element ");
 	scanf("%d",&n);
 	a=(int*)malloc(sizeof(int)*n);		//allocating dynamic memory for array
 	if(a==NULL)printf("\n can't allocate memory");
 	printf("Enter %d no. ",n);
 	for(i=0;i<n;i++)
 		scanf("%d",&a[i]);
 	printf("Search: ");
 	scanf("%d",&s);
 	
 	sort(a,n);							//sorting the array
	if(binary_search(a,n,s)!=-1)
 		printf(" found %d",s);
 	else
 		printf(" not found ");
	free(a);
 	return 0;
 }
