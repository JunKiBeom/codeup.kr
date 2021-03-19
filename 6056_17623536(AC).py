a,b = [bool(int(i)) for i in input().split()]
print((a and (not b)) or ((not a) and b))
