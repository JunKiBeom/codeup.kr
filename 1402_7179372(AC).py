n=int(input())
arr=[int(i) for i in input().split()]
arr.sort(reverse=True)
for i in arr:
    print(i,end=" ")
