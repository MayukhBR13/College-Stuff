import random

def examples(count = 1):
    lst = "Humans, gorillas, rats, mice, platypuses, kangaroos, tree kangaroos, dogs, cats, whales, dolphins, cheetahs, lions, tigers, hyenas, wolves, wolverines, hedgehogs, cows, bats, pigs, monkeys, donkeys, mules, horses, sheep, goat, deer, moose, antelope, gibbons, porpoises, seals, sea lions, sea otters, koalas, anteaters, otters, jaguars, leopards, elephants, rhinos, hippos, shrews, echidna, dingoes, bears, badgers, weasels, squirrels, rabbits, hares, hyraxes, naked mole rats, moles, beavers, pikas, ocelots, chimpanzees, orangutans, lynxes, bobcats, fishing cats, yaks, bison, buffalo, hogs, boars, meerkats, pumas, coyotes, foxes, bonobos"
    lst = lst.split(', ')
    random.shuffle(lst)
    print(lst[:count])
    
def characteristics():
    print('Copy this link and paste it as URL: https://www.britannica.com/animal/mammal')