'''6) Create a module which contains the functions as stated below.
a) F(x,y)=F(x-y,y)+1, if y ≤ x
b) F(n,r)=F(n-1,r)+F(n-1,r-1)
c) F(n)=F(n/2)+1 if n>1
d) F(M,N)=1 if M=0, or M ≥N ≥1, and F(M,N)=F(M-1,N)+F(M-1,N-1), otherwise.
e) B(m,x)=m!/(x!(m-x)!) where m>x,
B(0,0)=B(m,0)=1 and B(m,x)=B(m,x-1)*[(m-x+1)/x]'''
import mathfunc as mt

s=f'''F(2,3)=F(x-y,y)+1,    {mt.fun1(2,3)} 
F(5,6)=F(n-1,r)+F(n-1,r-1)   {mt.fun2(5,6)}
F(5)=F(n/2)+1 if n>1         {mt.fun3(5)}
F(5,6)=1 if M=0, or M ≥N ≥1, and F(M,N)=F(M-1,N)+F(M-1,N-1), otherwise.   {mt.fun4(5,6)}
B(5,6)=m!/(x!(m-x)!) where m>x,       
B(0,0)=B(m,0)=1 and B(m,x)=B(m,x-1)*[(m-x+1)/x]      {mt.fun5(5,6)}  '''


print(s)
