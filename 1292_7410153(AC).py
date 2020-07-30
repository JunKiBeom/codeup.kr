n=int(input())
l=[]
for i in range(0,10):
    l.append(int(n%10))
    n=int(n/10)
if sum(l)%7==4:
    print("suspect")
else:
    print("citizen")
