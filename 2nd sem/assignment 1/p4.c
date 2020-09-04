#include <stdio.h> 
int binarySearch(int arr[], int l, int r, int x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        // Check if x is present at mid 
        if (arr[m] == x) 
            return m; 
  
        // If x greater, ignore left half 
        if (arr[m] < x) 
            l = m + 1; 
  
        // If x is smaller, ignore right half 
        else
            r = m - 1; 
    } 
  
    // if we reach here, then element was 
    // not present 
    return -1; 
} 
  
int main(void) 
{ 
    int arr[100], c, n,s,result;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter %d numbers in Ascending order\n", n);
	for ( c = 0 ; c < n ; c++ )
 		scanf("%d",&arr[c]);
 	printf("Enter the number to search\n");
	scanf("%d",&s);
    result = binarySearch(arr, 0, n - 1, s); 
    (result == -1) ? printf("Element is not present"
                            " in array") 
                   : printf("Element present at "
                            "ind %d", 
                            result+1); 
    return 0; 
}
