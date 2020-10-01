"""3. Write a program to prompt for a score between 0.0 and 1.0. If the score is out of range, print 
an error message. If the score is between 0.0 and 1.0, print a grade using the following table:
>= 0.9 A
>= 0.8 B
>= 0.7 C
>= 0.6 D
< 0.6 F """

score=float(input("Enter a score(0-1): "))

if(score>=0 and score<=1):
    if(score>=0.9):
        gd="A"
    elif(score>=0.8):
        gd="B"
    elif(score>=0.7):
        gd="B"
    elif(score>=0.6):
        gd="C"
    else:
        gd="F"
    print("Grade "+gd)
else:
    print("the score is out of range")