''' Ask enter to enter two numbers (say, a and b). Generate two random numbers between those two numbers and 
 find a combination of these two newly generated random numbers.'''
import random
import math
a,b=input("enter two numbers:").split()
a=int(a)
b=int(b)
randa,randb=random.uniform(a,b),random.uniform(a,b)
randa=int(randa)
randb=int(randb)
print("two random numbers are:",randa,randb)
max1=max(randa,randb)
min1=min(randa,randb)
c=math.factorial(max1)/(math.factorial(max1-min1)*math.factorial(min1))
print("combination of two randomnumbers is:",int(c))
