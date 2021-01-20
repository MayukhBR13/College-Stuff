'''9) Write a program in Python to compare two files.'''

f1=open('demo.txt','r')
f2=open('tx.txt','r')
f1l=len(f1.read())
f2l=len(f2.read())

if(f1l<f2l):
    print("demo.txt < tx.txt")
elif(f1l==f2l):
    print("demo.txt == tx.txt")
else:
    print("demo.txt > tx.txt")

f1.close()
f2.close()

