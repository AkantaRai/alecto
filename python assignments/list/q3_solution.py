#q4.Print all the unique elements in the following list 
fifa = ['Italy','Argentina','Germany','Brazil','France','Brazil','Italy','Spain','Germany','France']
new=[]
for i in (fifa):
    if i not in new:
        new.append(i)
print(new)