def find_gcd(a, b):
    while a != 0 and b != 0:
        if a > b:
            a%=b
        else:
            b%=a
    gcd = a+b
    return gcd

a, b, c = input().split()
a, b, c = int(a), int(b), int(c)
x=find_gcd(a,b)
print(find_gcd(x,c))

