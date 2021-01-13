'''1) Create a list of strings. Write a Python program which creates another list from the first
 taking the first character from each word.'''

strings = ['This','is','Python']
i=0
f=[]

while i<len(strings):
    f.append(strings[i][0])
    i+=1

print(f)