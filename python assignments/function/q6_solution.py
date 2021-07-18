#q6.Write a Python program to print the even numbers from a given list.
def even(x):
    new=[]
    for i in x:
        if (i%2==0):
            new.append(i)
    return new
numbers=[1,2,3,4,5,6,7,8,9,10,11,12,13,14]
print(even(numbers))
