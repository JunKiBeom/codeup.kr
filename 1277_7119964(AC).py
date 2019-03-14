n=int(input())
arr=[int(i)for i in input().split()]
if n==1:
    print(("%d "%arr[0])*3)
else:
    print(arr[0],arr[int(n/2)],arr[n-1])
