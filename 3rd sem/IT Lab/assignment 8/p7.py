#Write a Python program which creates two dictionaries. One that stores conversion values from meters to centimeters and the other that stores the reverse.
a=int(input("Enter a Value(in meters):"))
mtc={a:a/100}
ctm=dict(map(lambda i:(i[1],i[0]),mtc.items()))
print("meters to centimeters ",mtc,"centimeters to meters",ctm)