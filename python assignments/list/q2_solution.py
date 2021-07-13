#Q2.Make a list of ten students in your class. Print the name of each student whose name ends with ‘a’.
word='a'
list=['akriti','aman','benisha','bipin','bipesh','carin','carol','cavin','janisha','jeevan']
for i in range(0,10):
    if list[i][-1]==word:
        print(list[i])