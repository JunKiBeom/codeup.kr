n=int(input())
n=int(n/2)
l=[]
for i in range(1,n):
    l.append(i*(n-i))
print(max(l))
