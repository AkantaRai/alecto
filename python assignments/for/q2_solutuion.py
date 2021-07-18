# q2.multiply those matrixes.
a =[[111,22,33,44],
    [44,55,56,1],
    [47,86,19,2],
    [1,2,22,3]]
b=[[11,22,3,4],
   [4,5,6,1],
   [7,6,19,2],
   [1,2,22,3]]
mul=[[0,0,0,0],
     [0,0,0,0],
     [0,0,0,0],
     [0,0,0,0]]
for i in range(4):
    for j in range (4):
        for k in range (4):
            mul[i][j]+=a[i][k]*b[k][j]
for l in mul:
    print(l)