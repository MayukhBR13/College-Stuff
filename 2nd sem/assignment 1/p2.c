#include <stdio.h>
int sum(int *a,int n);
int main() 
{
 int arr[100], c, n,s;
 float av;
 printf("Enter the number of elements:");
 scanf("%d",&n);
 printf("Enter %d numbers: ", n);
 for ( c = 0 ; c < n ; c++ )
 scanf("%d",&arr[c]);
 s=sum(arr,n);
 av=s/(float)n;
 printf("sumation = %d ,average = %.2f",s,av);
 return 0;
}
// user-defined function to check prime number
int sum(int *a,int n) {
 int j,s=0;
 for (j = 0; j < n; ++j) s+=a[j];
 return s;
}

