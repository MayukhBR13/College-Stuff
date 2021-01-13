'''5) Write a Python program which calculates volume of a box using function. The number of 
arguments passed, are at most three and at least zero'''

def calVol(l=1,b=1,h=1):
    return l*b*h

print(' l=%s ,vol=%s'%(12,calVol(12)))
print(' l=%s ,b=%s ,vol=%s'%(12,2,calVol(12,2)))
print(' l=%s ,b=%s ,h=%s ,vol=%s'%(12,2,10,calVol(12,2,10)))
