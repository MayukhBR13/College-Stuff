'''4) Write a program in Python to do slicing in all possible ways with all possible parameters,
 providing positive and negative values for step. Also, perform slicing from start and end both.'''

   
s = tuple("slicing")

s1 = slice(3)

s2 = slice(1, 5, 2)

s3 = slice(-1, -12, -2)

print(s[s1])

print(s[s2])

print(s[s3])