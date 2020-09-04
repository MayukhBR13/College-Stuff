/*Name:- Mayukh Barman Ray
 Roll No.:-04   ,  CSE  , 2nd Year 
 Assignment-1      	Date:18-8-2020
 Q2:-WAP to find a number using binary search(recursive)*/
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
 int binary_search(int *a,int l,int u,int num)
 { 	
		int i=l+(u-l)/2;
		if(l>u)
			return -1;
 		else if(a[i]==num)
			return i;			//returning sorted position
		else if(a[i]>num)
			return binary_search(a,l,i-1,num);
		else		
			return binary_search(a,i+1,u,num);	
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
	if(binary_search(a,0,n-1,s)!=-1)
 		printf(" found %d",s);
 	else
 		printf(" not found ");
	free(a);
 	return 0;
 }
