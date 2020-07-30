import math

def prime(n):
    if n==1:
        return False
    elif n==2:
        return True
    else:
        for i in range(2,n):
            if n%i==0:
                return False
            else:
                continue
        return True

def div(n):
    a=[]
    for i in range(1,math.ceil(math.sqrt(n))):
        if (n % i == 0):
            a.append(i)
            if not (n/i)==n:
                a.append(int(n/i))
    return a

def check(n):
    an=[]
    for i in n:
        if prime(i):
            an.append(i)
    return an

n=int(input())
a=div(n)
an=check(a)
if len(an)==2 and an[0]*an[1]==n:
    print(an[0],an[1])
else:
    print("wrong number")
