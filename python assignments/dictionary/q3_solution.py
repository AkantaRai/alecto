'''q3.users = {'g91':{'name':'Aron','age':55,'poison':'Old monk'},
     'twir56':{'name':'Visakha','age':26,'poison':'coca cola'},
        'jsdl8':{'name':'Saudi','age':12,'poison':'hinwa'}}
Generate a list of usernames, name, age and poison from the above dictionary.'''

users = {'g91':{'name':'Aron','age':55,'poison':'Old monk'},
     'twir56':{'name':'Visakha','age':26,'poison':'coca cola'},
        'jsdl8':{'name':'Saudi','age':12,'poison':'hinwa'}}
username=[]
dict1={}
dict2={}
dict3={}
name=[]
age=[]
poison=[]
for i in users.keys():
    username.append(i)
dict1.update(users[username[0]])
dict2.update(users[username[1]])
dict3.update(users[username[2]])
dict1.update(dict2)
dict1.update(dict3)
print (dict1)
