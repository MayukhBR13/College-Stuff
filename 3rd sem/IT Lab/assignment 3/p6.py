"""6. Write a program which repeatedly reads numbers until the user enters “done”. Once “done” is 
entered, print out the total, count, and average of the numbers. If the user enters anything other 
than a number, detect their mistake using try and except and print an error message and skip to the 
next number."""

s=0
c=0
while(1):
    a=input("#>")
    if(a=="done"):
        break
    try:
        a=float(a)
        s+=a
        c+=1
    except(ValueError):
        print(" bad input")
try:
    avg=s/c
    print(f"total:{s}, count:{c} and average:{avg}")
except(ZeroDivisionError):
    print(" No input given")