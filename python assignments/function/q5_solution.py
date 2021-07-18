# q5.Write a Python function that takes a list and returns a new list with unique elements of the first list
def unique(x):
    new=[]
    for i in x:
        if i not in new:
            new.append(i)
    return new
list=['vidal','sun','sun','vidal','messsi','aguero']
print(unique(list), "is the new list with unique element.")

