'''5) Create a table using list of lists by writing a program in Python.
Hint: table1 = [ [ 1, 2, 3 ], [ 4, 5, 6 ] ]'''

r,c=list(map(int,input("Enter row & column:").split()))
table=[list(map(int,input().split())) for _ in range(r)]
print("output:")
for i in table:
    print(" ".join(list(map(str,i))))

