#2. Write a program to find whether a number is prime or not.
def pri(a):
    if(a<=1):
        return False
    for i in range(2,int(a**.5)+1):
        if(a%i==0):
            return False
    return True

try:
    a=int(input("ENter a no. "))
    print(f"{a} is {'not '*(not pri(a))}prime")
except(ValueError):
    print(" wrong input")
except:
    print(" some error")