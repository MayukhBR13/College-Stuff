'''6) Create a module which contains the functions as stated below.
a) F(x,y)=F(x-y,y)+1, if y ≤ x
b) F(n,r)=F(n-1,r)+F(n-1,r-1)
c) F(n)=F(n/2)+1 if n>1
d) F(M,N)=1 if M=0, or M ≥N ≥1, and F(M,N)=F(M-1,N)+F(M-1,N-1), otherwise.
e) B(m,x)=m!/(x!(m-x)!) where m>x,
B(0,0)=B(m,0)=1 and B(m,x)=B(m,x-1)*[(m-x+1)/x]'''
def fun1(x,y):
    if(y<=x):
        return fun1(x-y,y)+1
    else:
        return 1
def fun2(n,r):
    if(n>1 and r>1):
        return fun2(n-1,r)+fun2(n-1,r-1)
    else:
        return 1
def fun3(n):
    if(n>1):
        return fun3(n/2)+1
    else:
        return 1
def fun4(M,N):
    if(M==0 or M>=1 and N>=0):
        return 1
    else:
        return fun4(M-1,N)+fun4(M-1,N-1)
def fc(n):
    f=1
    while(n>1):
        f*=n
        n-=1
    return n
def fun5(m,x):
    if(m>x):
        return fc(m)/(fc(x)*fc(m-x))
    elif(x==0):
        return 1
    else:
        return fun5(m,x-1)*((m-x+1)/x)