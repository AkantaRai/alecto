# q2,Write a Python function to multiply all the numbers in a list.
def list_mul(list):
    mul=1
    for i in list:
        mul=mul*i
    return mul
a=[1,2,3,4,5]
print(list_mul(a)," is product of emements of list.")