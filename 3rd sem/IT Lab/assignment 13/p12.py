'''12) Write a program in Python to merge the content of two files (one after another).'''

f1=open('tx.txt','r')
f2=open('demo.txt','r')
f3=open('tx4.txt','w')
s=f1.read()+str('\n')+f2.read()
f3.write(s)
f1.close()
f2.close()
f3.close()

f3=open('tx4.txt','r')
print(f3.read())
f3.close()