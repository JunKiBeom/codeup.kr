n=int(input())
a=int(n/10)
b=n%10
check=(b*10+a)*2
if check>100:
    check-=100
if check>50:
    print(check)
    print("OH MY GOD")
else:
    print(check)
    print("GOOD")
