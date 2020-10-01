#4. Write a program to print prime numbers for a range 1 to 1000.
def pri(a):
    if(a<=1):
        return False
    for i in range(2,int(a**.5)+1):
        if(a%i==0):
            return False
    return True

for i in range(1,1000+1):
    if(pri(i)):
        print(i,end=" ")