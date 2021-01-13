'''2) Write a program in Python using function to generate Pascal’s triangle of n rows.'''

def factorial(n):
    res=1
    for i in range(1,n+1):
        res*=i;

    return res

rows=int(input("Enter the number of rows "))

for i in range(0,rows):
    for j in range(1, rows-i):
        print("  " , end="")

    for k in range(0,i+1):
        Coefficient = int(factorial(i)/(factorial(k) * factorial(i-k)))  #Using Binomial Coefficient

        print("  ",Coefficient, end="")
    print()
