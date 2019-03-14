a,b=input().split()
a,b=int(a),int(b)
if b%a==0:
    print("%d*%d=%d"%(a,b/a,b))
elif a%b==0:
    print("%d*%d=%d" % (b, b / a, a))
else:
    print("none")
