#Q1.Write a python program to find the largest of three numbers .
x=int(input("enter a number"))
y=int(input("enter a 2nd number"))
z=int(input("entera 3rd number"))
if x>y&x>z:
    print(x,"is the largest")
elif y>z:
    print(y,"is the largest")
else:
    print(z,"is the largest")
    