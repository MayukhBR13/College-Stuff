"""7. Write another program that prompts for a list of numbers as above and at the end prints 
out both the maximum and minimum of the numbers and average."""

max=None
min=None
s=0
c=0
while(1):
    a=input("#>")
    if(a=="done"):
        break
    try:
        a=float(a)
        if(max<a):
            max=a
        if(min>a):
            min=a
        s+=a
        c+=1
    except(ValueError):
        print(" bad input")
    except(TypeError):
        min=max=a

try:
    avg=s/c
    print(f"Max:{max}, Min:{min} and average:{avg}")
except(ZeroDivisionError):
    print(" No input given")