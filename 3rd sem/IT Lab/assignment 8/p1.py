#Write a program to get the maximum and minimum value in a dictionary.
netIncome = {"Rohan": 25379, "Shila": 24662, "Ajay": 26819}
mini= min(netIncome, key=netIncome.get)
maxi= max(netIncome, key=netIncome.get)

print("Minimum Salary= {} : {}".format(mini, netIncome[mini]))
print("Maximum Salary= {} : {}".format(maxi, netIncome[maxi]))