'''6) Write a Python program using function which prints the name of the subjects you 
like to read. The total number of subjects may vary. The subject names are passed as arguments.'''

def printSub(name,*subList):
    print(f"{name} likes to read",",".join(subList))
    print(f"total {len(subList)} subjects")

nm=input("Enter Your name: ")
sub=input('Enter the subjects you like(sep by ","): ').split(',')
printSub(nm,*sub,"python")
