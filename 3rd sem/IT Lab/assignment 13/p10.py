'''10) Write a program in Python to copy the content of one file into another character by character.'''

f1=open('tx.txt','r')
f2=open('tx2.txt','w')
f2.write(f1.read())
f1.close()
f2.close()

f2=open('tx2.txt','r')
print(f2.read())
f2.close()