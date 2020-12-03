
arr=list(map(int,input('Enter some no.: ').split()))
def linearsearch(arr):
   f=0
   x =int(input("Enter the element to be searched->"))
   for i in range(len(arr)):
      if arr[i] == x:
         f=1
         break
   if(f==1):
       print("Search element found")
       return True
   else:
       print("Search element not found")
       return False
     
        
   
def binarySearch (arr, l, r):
     x =int(input("Enter the element to be searched->"))
     f=0   
     arr=sorted(arr)
     while(r >= l):   
            mid = l + (r - l) // 2
            if arr[mid] == x: 
                print("Search element found")
                f=1
                break
            elif arr[mid] > x: 
               r=mid-1
            else: 
               l=mid+1
    
     if f==0: 
        print ("Element is not present in array")
        return False
     return True
    


ch=int(input("Enter 1 to do Linear search and 2 for binary search->\n"))
def switch_demo(argument):
    if(argument==1):
        return linearsearch(arr)
    elif(argument==2):
        return binarySearch(arr,0,len(arr)-1)
switcher=switch_demo(ch)

