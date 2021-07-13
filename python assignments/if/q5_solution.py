#q5.Write a program to check whether the entered year is leap year or not.
year=int(input ("enter year: "))
if (year%4==0 or year%100==0 or year%400==0):
    print("its leap year.")
else:
    print("its not leap year.")
