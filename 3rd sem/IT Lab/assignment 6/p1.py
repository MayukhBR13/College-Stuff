'''1) Write a program in Python to append list of five players in a list and print it using append.'''
l=[]
i=int(input("Enter Last limit:"))
for x in range(1,i+1):
    p=input("Enter Player Name:")
    l.append(p)
print(l)