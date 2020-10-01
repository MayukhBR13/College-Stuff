#3. Write a program to find Armstrong for a range 1 to 1000.
def arms(a):
    s=0
    c=a
    while(a>0):
        s+=(a%10)**3
        a//=10
    return s==c


for a in range(1,1000+1):
    if(arms(a)):
        print(a)
