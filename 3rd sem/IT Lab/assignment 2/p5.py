"""5. Write a program which takes input of a number and check whether it is positive or negative."""
a=float(input("ENter a no. "))
print(f"{a} is "+("+ve" if (a>0) else ("neutral" if (a==0) else "-ve")))
