import random

def examples(count = 1):
    lst = "Angelfish (large),Angelfish (dwarf),Anthias,Bass,Groupers,Basslets,Assessors,Batfish,Blennies,Engineer gobies,Boxfish,Blowfish,Butterflyfish,Cardinalfish,Chromis,Clownfish,Damselfish,Dartfish,Dragonets,Eels,Filefish,Foxface,Flatfish,Frogfish,Goatfish,Gobies,Clingfishes,Grunts,Hamlet,Hawkfish,Hogfish,Idols,Jacks,Jawfish,Lionfish,Parrotfish,Pipefish,Pseudochromis,Rabbitfish,Rays,Scorpionfish,Seahorses,Squirrelfish,Sharks,Snappers,Tangs,Tilefish,Triggerfish,Wrasse"
    lst = lst.split(',')
    random.shuffle(lst)
    print(lst[:count])
    
def characteristics():
    print('Copy this link and paste it as URL: https://en.wikipedia.org/wiki/Fish')