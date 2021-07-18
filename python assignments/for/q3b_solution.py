''' Generate the following patterns using for loop
F                     
F                       0 increment
FF                      1 increment
FFF                     1 increment
FFFFF                   2 increment
FFFFFFFF                3 increment
FFFFFFFFFFFFF           5 incremnet    
FFFFFFFFFFFFFFFFFFFFF    8 incremnet
FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF               13 increment
'''
# incement is in fabonacci series.
fabonacci=[0,1] 
b=0
while b<21:
    b=fabonacci[-1]+fabonacci[-2]
    print(b)
    fabonacci.append(b)
for i in fabonacci:
    print('F'*i)