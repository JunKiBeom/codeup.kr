n = int(input())
l = [int(i) for i in input().split()]
num = [0]*24
for i in range(n):
    num[l[i]]+=1

for i in range(1,24):
    print(num[i],end=" ")
