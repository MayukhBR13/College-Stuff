from tkinter import *

rt=Tk()
rt.title('Converter')
fr=Frame(rt)

l1=Label(fr,text='Converter')
l1.pack()

f2=Frame(fr)
cofvar=IntVar()
cofvar.set(1)
r1=Radiobutton(f2,text='Celsius to\nFahrenheit',value=1,variable=cofvar)
r1.grid(row=0,column=0)
r2=Radiobutton(f2,text='Fahrenheit\nto Celsius',value=2,variable=cofvar)
r2.grid(row=0,column=1)
f2.pack()

f3=Frame(fr)
l2=Label(f3,text='Celsius')
l2.grid(row=0,column=0)
tvar=StringVar()
e1=Entry(f3,textvariable=tvar)
e1.grid(row=0,column=1)

l3=Label(f3,text='')
l3.grid(row=1,column=0,columnspan=2)

def convert():
    i=0
    try:
        i=int(e1.get())
    except:
        print('error')
        return
    if(cofvar.get()==1):
        i=str(round((i * 9/5) + 32,2))
        l3['text']=i
        print(i)
    elif(cofvar.get()==2):
        l3['text']=str(round((i - 32) * 5/9,2)) 



bt=Button(f3,text='Convert',command=convert)
bt.grid(row=2,column=0,columnspan=2)
f3.pack()






fr.pack()



rt.mainloop()