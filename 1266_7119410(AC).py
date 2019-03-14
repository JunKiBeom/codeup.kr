from functools import reduce
n=input()
list=[int(i) for i in input().split()]
print(reduce(lambda x,y: x+y,list))
