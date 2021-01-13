'''5) Write a Python program to count the elements in a list until an element is a tuple.'''

  
l = [1, 2, (3, 4 , 5), 6]
c = 0
while not isinstance(l[c], tuple):
    c = c + 1
print("Length: ", c)