from tkinter import *
from tkinter import ttk


def getCountryListButton(rt):
    '''returns (combobox,mVar)'''
    l=[]
    with open('cName.txt') as nl:
        l=nl.readlines()
    mv=StringVar()
    mb=ttk.Combobox(rt,textvariable=mv,values=l)
    return (mb,mv)


rt=Tk()
f1=Frame(rt)

info={}

info['name']=StringVar()
l1=Label(f1,text='Name')
l1.grid(row=1,column=0)
e1=Entry(f1,textvariable=info['name'],border=1)
e1.grid(row=1,column=1)

info['ads']=StringVar()
l2=Label(f1,text='Address')
l2.grid(row=2,column=0)
e2=Entry(f1,textvariable=info['ads'],border=1)
e2.grid(row=2,column=1)

info['zCode']=StringVar()
l3=Label(f1,text='Zip Code')
l3.grid(row=3,column=0)
e3=Entry(f1,textvariable=info['zCode'],border=1)
e3.grid(row=3,column=1)

l4=Label(f1,text='Country')
l4.grid(row=4,column=0)
e4,info['country']=getCountryListButton(f1)
e4.grid(row=4,column=1)

info['Gender']=IntVar()
l5=Label(f1,text='Country')
l5.grid(row=5,column=0)
e5=Frame(f1)
e51=Radiobutton(e5,text='Male',variable=info['Gender'],value=1).pack(side=RIGHT)
e52=Radiobutton(e5,text='FeMale',variable=info['Gender'],value=2).pack(side=RIGHT)
e5.grid(row=5,column=1)

info['color']=[BooleanVar(),BooleanVar(),BooleanVar()]
l6=Label(f1,text='Like')
l6.grid(row=6,column=0)
e6=Frame(f1)
e61=Checkbutton(e6,text='Red',variable=info['color'][0]).pack(side=RIGHT)
e62=Checkbutton(e6,text='Blue',variable=info['color'][1]).pack(side=RIGHT)
e63=Checkbutton(e6,text='Green',variable=info['color'][2]).pack(side=RIGHT)
e6.grid(row=6,column=1)




f1.pack()

bSubmit=Button(rt,text='Submit',command=lambda : print(info['Gender'].get()))
bSubmit.pack(side=RIGHT)
bClear=Button(rt,text='Clear')
bClear.pack(side=RIGHT)

rt.mainloop()