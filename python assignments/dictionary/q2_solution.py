#q2.Euro = {‘France’:5,’Germany’:2,’Portugal’:3,’Hungary’:6}
# Make two lists from above dictionary
Euro = {'France':5,'Germany':2,'Portugal':3,'Hungary':6}
list1=[]
list2=[]
for vlaue, key in Euro.items():
    list1.append(vlaue)
    list2.append(key)
print(list1,list2,"is two list form dictonary.")