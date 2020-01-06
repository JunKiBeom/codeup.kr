def fibo(n):
    f1=0
    f2=1
    for i in range(2,n+1):
        f3=f1+f2
        f1=f2
        f2=f3
    return f2
print(fibo(int(input())))
