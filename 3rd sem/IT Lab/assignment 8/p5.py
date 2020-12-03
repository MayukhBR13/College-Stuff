#Write a Python program to sort a dictionary by key
p = {'e': 1, 'a': 2, 'u': 3, 'o': 4, 'i': 5}
print(dict(sorted(p.items(),key= lambda a : a[0])))
