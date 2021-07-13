# q3.WAP to find whether given input is number or character.
ch=input("enter a chracter or number:")
if (ch>='a'and ch<='z') or (ch>='A' and ch<='Z'):
    print("given input is chracter")
elif (ch>='0' and ch<='9'):
    print("print given input is number.")
else:
    print("given input is special chracter.")