a,b=input().split()
a,b=int(a),int(b)
print("%.6f"%max(a+b,a-b,a/b,a*b,a**b,b-a,b/a,b**a))
