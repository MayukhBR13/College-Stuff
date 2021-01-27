'''12) Write a program in Python that accepts date of birth along with other personal
details of a person. Throw an exception if an invalid date is entered.'''

import datetime as dt
import calendar as cd

nm=input('Enter Your Name: ')
ct=input('Enter Your city name: ')
try:
    dob=list(map(int,input('Enter D.O.B (DD-MM-YYYY): ').split('-')))
    dob=dt.datetime(year=dob[2],month=dob[1],day=dob[0])
    print(f'Name: {nm}\nCity Name: {ct}\nDOB: {dob.strftime("%d-%h-%Y")}')
except(ValueError):
    print('Invalid date')

