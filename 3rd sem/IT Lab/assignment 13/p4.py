'''4) Print the words written in the first line of a file. Access each word using a loop.'''
with open("file.txt", "r") as file: 
    data = file.readlines() 
    for line in data: 
        word = line.split() 
        print("\n".join(word)) 