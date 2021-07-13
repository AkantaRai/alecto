#q5.A = [‘a’,’b’,’c’,’d’] B = [‘1’,’a’,’2’,’b’]
#find union and intersection
A = ['a','b','c','d'] 
B = ['1','a','2','b']
new=[]
for j in A:
    if j in B:
        new.append(j)
print(new,"isthe intersection of two lists.")
for i in A:
    if i not in B:
        B.append(i)
print(B,"is uniton of both list.")


