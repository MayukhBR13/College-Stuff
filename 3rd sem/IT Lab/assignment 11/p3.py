'''3) . Print the current date and time in the following format.
year: 2018
month: 12
day: 24
time: 04:59:31
date and time: 12/24/2018, 04:59:31'''
import datetime

d=datetime.datetime.now()
print(f'year: {d.year}\nmonth: {d.month}\nday: {d.day}\ntime: {d.time().strftime("%H:%M:%S")}\ndate and time: {d.strftime("%m/%d/%Y, %H:%M:%S")}')