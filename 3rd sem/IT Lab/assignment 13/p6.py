'''6) Count the number of words in a file.'''
words=0
with open('demo.txt','r') as f:
    for line in f:
        w=line.split()
        words+=len(w)
print('no. of words=',words)
