'''1) . Check whether a given year is leap year or not. Provide a range of years and display 
how many leap years are there.'''
import calendar

f,l=tuple(map(int,input('Enter start & end year: ').split()))
for i in range(f,l+1):
    if calendar.isleap(i):
        print(i)
    
