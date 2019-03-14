a,b,c,d=input().split()
a,b,c,d=int(a),int(b),int(c),int(d)
result=a
for i in range(2,d+1):
    result=result*b+c
print(result)
