import random

def examples(count = 1):
    lst = "Turles, Tatarus, Chameleon, Iguana, Lizard, Snakes, Crocodiles, Alligators, Gharials"
    lst = lst.split(', ')
    random.shuffle(lst)
    print(lst[:count])
    
def characteristics():
    print('Copy this link and paste it as URL: https://www.britannica.com/animal/reptile')