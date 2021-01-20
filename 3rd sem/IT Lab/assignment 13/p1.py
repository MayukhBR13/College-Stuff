'''1) Write a file. Read the file and print its content. Read first two lines. Read first 5 characters.
Read the file using loop.'''
f=open('tx.txt','r')
print(f.read())

f.seek(0)
print(f.readline(),f.readline(),sep='')

f.seek(0)
print(f.readline(5))

f.seek(0)
for i in f:
    print(i,end='')
f.close()