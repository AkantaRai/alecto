#.q1 Multiply following matrices
#Using for loops and print the result.
a =[[1,2,3],
    [4,5,6],
    [7,8,9]]
b=[[111,22,33],
   [44,55,56],
   [47,86,19]]
mul=[[0,0,0],
     [0,0,0],
     [0,0,0]]
for i in range(3):
    for j in range (3):
        for k in range (3):
            mul[i][j]+=a[i][k]*b[k][j]
for l in mul:
    print(l)



