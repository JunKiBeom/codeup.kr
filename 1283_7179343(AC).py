import math
n=int(input())
z=n
day=int(input())
per=[int(i) for i in input().split()]
for i in range(day):
    n*=(100+per[i])/100
print("%.f"%(-z+n))
if -z+n>0:
    print("good")
elif -z+n==0:
    print("same")
else:
    print("bad")

