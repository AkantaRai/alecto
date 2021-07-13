#q6.Write a program to check if the number is Armstrong or not.
i=input("enter a number: ")
lhs=int(i)
am=[]
for j in i:
    j=int(j)
    am.append(j**3)
rhs=sum(am)
if lhs==rhs:
    print(lhs,"is armstrong number.")
else:
    print(lhs,"is not armstrong number.")