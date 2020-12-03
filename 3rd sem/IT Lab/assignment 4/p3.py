#3. Write a Python program which takes a name as input and print the initials.
try:
    a=input("Enter: ").strip()
    if(a!=""):
        r=a.split()
        for i in range(0,len(r)-1):
            r[i]=r[i][0].capitalize()
        r[-1]=r[-1].capitalize()
        r=".".join(r)
        print(r)
    else:
        print("invalid")
except:
    print("Trere is some error")