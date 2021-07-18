#q2.Deli: Make a list called sandwich_orders and fill it with the names of various sandwiches.
#  Then make an empty list called finished_sandwiches . Loop through the list of sandwich orders 
# and print a message for each order, such as I made your tuna sandwich. As each sandwich is made,
#  move it to the list of finished sandwiches. After all the sandwiches have been made, print a 
# message listing each sandwich that was made.
sandwiches_order=['vege','tuna','chicken','salmon','mutton','club','fish']
finished_sandwiches=[]
x=0
while x<len(sandwiches_order):
    print("i made your {} sandwich.".format(sandwiches_order[x]))
    finished_sandwiches.append(sandwiches_order[x])
    x+=1
print('sandwiches we made today are:',finished_sandwiches)
