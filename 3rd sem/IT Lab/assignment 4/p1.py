#1. Write a program to check whether the string is palindrome or not.

try:
    a=input("Enter: ")
    if(a!=""):
        if(a==a[::-1]):
         print(" palindrome")
        else:
         print(" not palindrome")
    else:
        print("invalid")
except:
    print("Trere is some error")