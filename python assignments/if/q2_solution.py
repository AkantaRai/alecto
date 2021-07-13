#Q2.Write a python program to check whether a character is uppercase or lowercase alphabet
ch=input("enter achracter")
if(ch>='a'and ch<='z'):
    print("given chracter is in lower case.")
elif (ch>='A' and ch<='Z'):
    print("given chracter is in upper case.")
else:
    print("given input is not chracter.")