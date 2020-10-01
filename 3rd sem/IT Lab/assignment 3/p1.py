#1. Write a program to sum up to n numbers.
try:
    a=int(input("Enter a no."))
    s=0
    for i in range(1,a+1):
        s+=i
    print("sum is ",s)
except(ValueError):
    print(" bad input")
except:
    print(" Some Error")