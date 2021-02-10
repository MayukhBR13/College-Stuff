from tkinter import *

rt=Tk()
rt.title('Converter')
fr=Frame(rt)

lb1=Listbox(fr)
lb1.grid(row=2,column=0)

i=0
def ins():
    global i
    
    print('hi')

    global lb1
    lb1.insert(i,e1.get())
    i+=1
    print('hi')
    return

l1=Label(fr,text='Name')
l1.grid(row=1,column=0)
avar=StringVar()
e1=Entry(fr,textvariable=avar)
e1.grid(row=1,column=1)
b1=Button(fr,text='Insert',command=ins)
b1.grid(row=1,column=2)


lb2=Listbox(fr)
lb2.grid(row=2,column=2)

i2=0
def sft():
    try:
        a=lb1.curselection()
        lb2.insert()
        print(a)
    except:
        print('error')

fm=Frame(fr)
b2=Button(fm,text='>',command=sft)
b2.pack()


fm.grid(row=2,column=1)

fr.pack()
rt.mainloop()