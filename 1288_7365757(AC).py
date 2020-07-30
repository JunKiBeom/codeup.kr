def fact(n):
    if n == 1: return 1
    return n * fact(n - 1)
n,r=input().split()
n,r=int(n),int(r)
if (n==r):
    print(1)
else:
    print(int(fact(n)/(fact(n-r)*fact(r))))
