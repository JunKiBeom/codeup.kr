﻿n=int(input())
arr=[[0 for i in range(n)] for j in range(n)]
k=1
for i in range(n):
    for j in range(n):
        arr[i][j]+=k
        k+=1
for i in range(n):
    for j in range(n):
        print(arr[i][j],end=" ")
    print()
