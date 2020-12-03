'''2) Write a program in Python which counts frequency of numbers from a list using count.'''


l1=list(map(int,input("Enter a list :").split()))
l1.sort() 
m=l1[0]
print(f'{m} : {l1.count(m)}')
for i in range(len(l1)):
    if(l1[i]!=m):
        m=l1[i]
        print(f'{m} : {l1.count(m)}')