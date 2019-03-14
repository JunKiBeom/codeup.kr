a,b=input().split()
a,b=int(a),int(b)

if(b-30<0):
    a-=1
    if (a<0):
        print(24+a,60+b-30)
    else:
        print(a,60+b-30)
else:
    print(a,b-30)
