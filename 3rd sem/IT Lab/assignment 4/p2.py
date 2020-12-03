#2. Write a python program to reverse words in a sentence.
def rev(s):
 w=s.split(" ")
 n=[word[::-1] for word in w]
 n=" ".join(n)
 return n
s=input("Enter:")
print(rev(s))
