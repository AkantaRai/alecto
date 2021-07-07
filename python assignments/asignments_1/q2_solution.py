#Q.2 Write a Python code to calculate Combination (15,3)
import math
n,r=input("enter two vlaue:").split()           #input 15 and 3 in terminal
n=int(n)
r=int(r)
c=math.factorial(n)/(math.factorial(n-r)*math.factorial(r))
print("the combination of (15,3) is ",c)