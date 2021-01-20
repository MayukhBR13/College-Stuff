'''11) Write a program in Python which converts the case of one file into another.'''


f1=open('tx.txt','r')
f2=open('tx3.txt','w')
f2.write(f1.read().swapcase())
f1.close()
f2.close()

f2=open('tx3.txt','r')
print(f2.read())
f2.close()