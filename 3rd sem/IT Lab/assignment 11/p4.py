'''4) Write a Python program importing random which outputs the frequency of occurrence of each faces for rolling a dice 6000 times.'''
import random


fr = [0, 0, 0, 0, 0, 0, 0]
for i in range(0, 6000):
    fr[random.randint(1,6)] += 1
for i in range(1,7):
    print(f'{i} : {fr[i]}')

