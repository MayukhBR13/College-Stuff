'''8) Write a program in Python that reads the text from a file and writes it into another file but in
reverse order.'''

f1=open('tx.txt','r')
f2=open('txRev.txt','w')
fs=f1.read()[::-1]
f2.write(fs)
f1.close()
f2.close()

f2=open('txRev.txt','r')
print(f2.read())
f2.close()