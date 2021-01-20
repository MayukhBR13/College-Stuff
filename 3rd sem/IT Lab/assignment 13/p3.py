'''3) Check whether a file exists or not. Delete it.'''
import os
if os.path.exists("demofile2.txt"):
  os.remove("demofile2.txt")
  print('demo.txt is removed')
else:
  print("The file does not exist")