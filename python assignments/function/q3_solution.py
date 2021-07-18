#q3.Write a Python function to calculate the factorial of a number (a non-negative integer).
#The function accepts the number as an argument.
def factorial(num):
    mul=1
    while num>0:
        mul*=num
        num-=1
    return mul
x=int(input("enter a number:"))
print(factorial(5), "is the factorial of given number.")