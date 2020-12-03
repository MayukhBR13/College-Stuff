#Write a Python program that inverts a dictionary, i.e., it makes key of one dictionary value of another and vice versa.
p = {'e': 1, 'a': 2, 'u': 3, 'o': 4, 'i': 5}
rp=dict(map(lambda a: (a[1],a[0]),p.items()))
print(f'{p}^-1 = {rp}')