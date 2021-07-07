# Q.5 Write a Python code to calculate LCM of (25,55)

a=int(input("enter one of no. for LCM: "))    #enter value 5 and 55 in terminal
b=int(input("enter other no. for LCM: "))
la=[]                                        # list to save multiple of a
lb=[]                                        # list to save multiple of b
for i in range(1,20):
    mula=i*a
    la.append(mula)
for j in range(1,20):
    mulb=j*b
    lb.append(mulb)
mina=min(la)
minb=min(lb)
least_no_in_lists=min(mina,minb)
if least_no_in_lists in la:
    for k in la:
        if k in lb:
            print(k,"is LCM of given two numbers")
            break
else:
    for l in lb:
        if l in la:
            print(l,"is LCM of given two numbers")
            break