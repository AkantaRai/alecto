# Q.8 Write a program to convert 108 to binary.
deci=int(input("enter value in decimal:"))      #input 108 in terminal
binary=[]
while deci>0:
    mod=deci%2
    deci=int(deci/2)
    binary.append(mod)

else:
    binary.reverse()
    print("the binary of the given number is",binary)