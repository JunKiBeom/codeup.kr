num=[]
a0,b0=map(int,input().split())
a1,b1=map(int,input().split())
a2,b2=map(int,input().split())
num.append(a0*b0)
num.append(a1*b1)
num.append(a2*b2)
print(max(num))
