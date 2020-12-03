'''4).Write a program in python to search for an item from a list using index.'''

l1=list(map(int,input("Enter a list:").split()))
s=int(input('Search for: '))
try:
    print(" Match found at ",l1.index(s))
except ValueError:
    print(" Match not found ")

