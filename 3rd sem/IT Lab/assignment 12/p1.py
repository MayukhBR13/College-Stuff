'''1) Import datetime module and print current date and time.'''
import datetime as dt
d=dt.datetime.now()
print(f'date: {d.strftime("%d-%h-%y")}\ntime: {d.strftime("%I:%M:%S(%p)")}')