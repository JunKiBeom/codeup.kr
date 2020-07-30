a,b=input().split()
a,b=int(a),int(b)
sum=0
cnt=1
for i in range(a,b+1):
    if i%2==0:
        print("-%d"%i,end="")
        sum-=i
        cnt+=1
    else:
        if cnt==1:
            print("%d"%i,end="")
            cnt+=1
        else:
            print("+%d" % i, end="")
        sum+=i
if (sum>0):
    print("=+%d"%sum)
else:
    print("=%d" % sum)
