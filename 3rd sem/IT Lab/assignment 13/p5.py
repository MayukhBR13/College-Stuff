'''5) . Count the number of lines in a file.'''
f=open('demo.txt','r')
lines=len(f.readlines())
print(f'no. of lines:{lines}')
f.close()
