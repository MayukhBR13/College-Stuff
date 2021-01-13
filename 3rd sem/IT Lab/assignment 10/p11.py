'''11) Write a Python program to count the number arguments passed as command line arguments and
 print the program name. Also print the arguments.'''
 
import sys

print("count: ",(len(sys.argv)-1))
print("Program name: ",__file__.split('\\')[-1])
print("\n".join(sys.argv[1:]))