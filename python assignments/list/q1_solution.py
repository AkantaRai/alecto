# Q1.Make a list of ten students in your class. Print the name of each student whose name starts with ‘B’.
word='b'
list=['akriti','aman','benisha','bipin','bipesh','carin','carol','cavin','janisha','jeevan']
for i in range(0,len(list)):
    if list[i][0]==word:
        print(list[i])
