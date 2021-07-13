# q6.Calculate the mean and standard deviation of the following list:
import math
Numbers = [1,2,3,5,88,99,55,33,41,52]
sq_num=[]
for i in Numbers:
    sq_num.append(i**2)
A=sum(sq_num)/len(Numbers)
B=(sum(Numbers)/len(Numbers))**2
S=math.sqrt(A-B)
print(S,"is the standard deviation")