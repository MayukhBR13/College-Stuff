a=int(input("Enter the range: "))

b=0;c=1;d=1
while(c<a):
    b=c
    c=d
    d=b+c
    if(c>a):
        c=a+1
    for i in range(b+1,c):
        print(i)
   

