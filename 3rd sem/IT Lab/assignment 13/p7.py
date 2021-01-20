'''7) Find the maximum length words in a file.'''
words=0
with open('demo.txt','r') as f:
    mx=max(f.read().split(),key=len)
    print(mx)
