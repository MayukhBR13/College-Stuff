import random

def examples(count = 1):
    lst = "Crow,Peacock,Dove,Sparrow,Goose,Ostrich,Pigeon,Turkey,Hawk,Bald eagle,Raven,Parrot,Flamingo,Seagull,Swallow,Blackbird,Penguin,Robin,Swan,Owl,Stork,Woodpecker"
    lst = lst.split(',')
    random.shuffle(lst)
    print(lst[:count])
    
def characteristics():
    print('Copy this link and paste it as URL: https://www.bioexplorer.net/animals/birds/')