# q7.Write a Python function to check whether a string is a pangram or not. 
# Note : Pangrams are words or sentences containing every letter of the alphabet at least once.
def pangram(x):
    if len(set('abcdefghijklmnopqrstuvwzyz')-set(x))==0:
       print("given text is pangram.")
    else:
        print("given text is not pangram.")
strings=input("enter text to check it is pangram or not: ")
strings=strings.replace(" ","")
strings=strings.lower()
print(strings)
pangram(strings.lower())
