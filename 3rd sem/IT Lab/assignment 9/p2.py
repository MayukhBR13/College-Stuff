'''2) Write a Python program that prompts the user to enter an alphabet. Print all the words in the list that starts with that alphabet.'''
strings = ['welcome','to','python','programming']
i = 0
alphabet = input("Enter an alphabet::")
while i < len(strings):
    if alphabet == strings[i][0]:
        print(strings[i])
    i += 1