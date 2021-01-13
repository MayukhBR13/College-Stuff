'''8) Write a program that has a dictionary of your friends’ name (as keys) and their birthdays. 
Print the items in the dictionary in a sorted order. Prompt the user to enter a name and check if
 it is present in the dictionary. If the name does not exist, then ask the user to enter DOB. Add 
 the details in the dictionary.'''

stu={}
def checkAndUpdate(name):
    if(name in stu):
        print(f"{name}'s DOB is {stu[name]}")
    else:
        try:
            dob=tuple(map(int,input(f"Enter {name}'s DOB(dd-mm-yyyy): ").split('-')))
            stu[name]=dob
        except:
            print(" bad input ")
    

while(True):
    a=input('Enter a name: ')
    checkAndUpdate(a)
    if(input("y(y/n) to continue: ")!='y'):
        break
for i in sorted(stu):
    print(f"{i}'s DOB is {stu[i]}")


