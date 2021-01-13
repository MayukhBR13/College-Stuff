'''2) Write a program which will print the month name and first Monday in a given year.'''
import calendar
n=int(input('Enter year: '))
c=calendar.Calendar(calendar.MONDAY)
for i in range(12):
    d=c.monthdayscalendar(n,i+1)
    print(calendar.month_name[i+1]," = "+str(d[0][0] if d[0][0]!=0 else d[1][0]))