# Q.9 Write a program to convert 1008 to hexadecimal.
deci=int(input("enter value in deimal:"))   #enter 1008 i terminal
hex=[]
while deci>0:
    mod=deci%16
    deci=int(deci/16)
    if mod==10:
        hex.append('A')
    if mod==11:
        hex.append('B')
    if mod==12:
        hex.append('C')
    if mod==13:
        hex.append('D')
    if mod==14:
        hex.append('E')
    if mod==15:
        hex.append('F')
    else:
        hex.append(mod)
else:
    hex.reverse()
    print("the hexadecimal vlaue is",hex)
