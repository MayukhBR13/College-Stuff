a=input("enter a str: ").upper()
v,c,w,p=0,0,0,0
w=len(a.split())
for i in a:
    if(i=='A' or i=='E' or i=='I' or i=='O' or i=='U' ):
        v+=1
    elif(i>='A' and i<='Z'):
        c+=1
    elif(i!=' '):
        p+=1
print(f"word:{w},vowel:{v},consonant:{c},punctuation:{p}")