# q4.Write a Python function that accepts a string and calculates the number of uppercase letters and
# lowercase letters.
def uplow(string):
    low=0
    upp=0
    for s in string:
        if (65<=ord(s)and ord(s)<=90):
            upp+=1
        else:
            low+=1
    return (low,upp)
any_string=input("enter a string: ")
print("no of upper sace and lower case in given input are",uplow(any_string),"respectively")