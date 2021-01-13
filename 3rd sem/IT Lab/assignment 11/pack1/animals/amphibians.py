import random

def examples(count = 1):
    lst = "Frogs,Toads,Salamanders,Newts,Caecilians"
    lst = lst.split(',')
    random.shuffle(lst)
    print(lst[:count])
    
def characteristics():
    print('Copy this link and paste it as URL: https://byjus.com/biology/amphibia/')