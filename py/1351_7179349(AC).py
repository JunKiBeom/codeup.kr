a,b=input().split()
a,b=int(a),int(b)
for i in range(a,b+1):
    for j in range(1,10):
        print("%d*%d=%d"%(i,j,j*i))
