#q1.Students = [‘jack’,’jill’,’david’,’silva’,’ronaldo’]
#Marks = [‘55’,’56’,’57’,’66’,’76’]
#Make a dictionary using lists above and delete the key-value (students:marks) pairs with lowest marks. 
Marks = [55,56,57,66,76]
Students = ['jack','jill','david','silva','ronaldo']
d={}
for i in range(len(Marks)):
    d[Students[i]]=Marks[i]
print(d)
