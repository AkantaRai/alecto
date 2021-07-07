'''Write a program to calculate direction and magnitude of the vector described by the following points.
A = (20,30)
B = (30,40)'''
A=(20,30)                                           #given in qsn
B=(30,40)
magA=( A[0] ** 2 + A[1] ** 2 ) ** 0.5               #mag of A
magB=( B[0] ** 2 + B[1] ** 2 ) ** 0.5               #mag of B
x1=A[0]/magA
y1=A[1]/magA
x1=round(x1,2)
y1=round(y1,2)
x2=B[0]/magB
y2=B[1]/magB
dira=(x1,y1)
dirb=(x2,y2)
print("magnitude of A and B is ",magA,magB,"respectively")
print("direction of A and B is ",dira,dirb,"repectively")