'''1) Write a program in Python using function (recursive and non recursive) to generate 
Fibonacci series up to nth term. The n is provided as input and passed to the function'''
def fiblist(n):
    lst=[None]*n
    lst[0]=0
    lst[1]=1
    for i in range(2,n):
        lst[i]=lst[i-1]+lst[i-2]

    return lst


def fib(n):
    a=0
    b=1
    if n==1:
        print(a)
    else:
        print(a)
        print(b)

        for i in range(2,n):
            c=a+b
            a=b
            b=c
            print(c)
no=int(input("Enter the range upto which you want the fibonacci numbers "))
ch=int(input("Press 1 for Recursive Solution. Press 2 for Iterative Solution "))
if ch==1:

    print("Recursive solution ")
    Fibo= fiblist(no)
    print(Fibo)
if ch==2:

    print("Iterative solution ")

    fib(no)

