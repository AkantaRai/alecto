#Q.1 Write a Python code to calculate Permutation (5,3)
import math
n,r=input("enter two vlaue:").split()    #input 5 and 3 in terminal
n=int(n)
r=int(r)
p=math.factorial(n)/math.factorial(n-r)
print("the permutation of the (5,3) is",p )
