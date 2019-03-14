from functools import reduce
n=input()
list=[int(i) for i in input().split()]
m=[]
for i in list:
    if i%5==0:
        m.append(i)
print(reduce(lambda x,y: x+y,m))
