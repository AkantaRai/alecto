#q7.Write a program to compute the grade from marks. 
'''
Marks                      Grade
Marks<=50               ==>  F
60>=marks>50            ==>  E
70>= marks > 60         ==>  D
80>= marks > 70         ==>  C
90 > = marks > 80       ==>  B
100>= marks >90         ==>  A
'''
marks=int(input("enter your marks: "))
if marks<50:
    print("your grade is F")
elif (60>=marks):
    print("your grade is E")
elif(70>= marks ):
    print("your grade is D")
elif(80>= marks ):
    print("your grade is C")
elif(90 >= marks ):
    print("your grade is B")
else:
    print("your grade is A")
    
