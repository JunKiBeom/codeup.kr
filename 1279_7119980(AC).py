a,b=input().split()
a,b=int(a),int(b)
sum=0
for i in range(a,b+1):
    if i%2==0:
        sum-=i
    else:
        sum+=i
print(sum)
