'''7) Create a dictionary of products purchased and their MRPs. Calculate the bill and
 display to the customer.'''

pro={}
def addPro():
    name=input('Enter product name:')
    if(name in pro):
        try:
            q=int(input("Quantity: "))
            pro[name]['quantity']+=q
        except:
            print('Bad input')
    else:
        try:
            q=int(input("Quantity: "))
            mrp=int(input("MRP/item: "))
            pro[name]={'quantity':q,'total':q*mrp}
        except:
            print('Bad input')
def genBill():
    total=0
    print('-------------------------')
    for i in pro.items():
        print(f"Product:{i[0]} Quantity:{i[1]['quantity']} Total:{i[1]['total']}")
        total+=i[1]['total']
    print('Total: ',total)
    print('-------------------------')


while(True):
    addPro()
    if(input("y(y/n) to continue: ")!='y'):
        break
genBill()