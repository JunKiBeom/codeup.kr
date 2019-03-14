a,b=input().split()
a,b=int(a),int(b)
sum=0
for i in range(a,b+1):
    if i%2==0:
        print("-%d"%i,end="")
        sum-=i
    else:
        print("+%d"%i,end="")
        sum+=i
print("=%d"%sum)
