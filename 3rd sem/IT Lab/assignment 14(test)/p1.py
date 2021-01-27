'''1) Write a program which repeatedly reads numbers until the user enters “done”. Once
“done” is entered, print out the total, count, and average of the numbers. If the user
enters anything other than a number, detect their mistake using try and except and print
an error message and skip to the next number.'''
print('Enter some numbers(Done to exit) ')
iList=[]
while(True):
    a=input('->>')
    if(a.lower()=='done'):
        break
    try:
        i=float(a)
        iList.append(i)
    except:
        print('Error: only numbers allowed')
c=len(iList)
t=sum(iList)
av=t/c
print(f'Total: {t}\nCount:{c}\nAverage: {av}')
