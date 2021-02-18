import re
inp = input()
l = re.split("\W+",inp)
op = re.split("\w+",inp)
l.remove('')
op.remove('')

index=1
for i in op:
    l.insert(index, i)
    index+=2

# print(l)

l.reverse()
result=int(l.pop())

for i in range(len(op)):
    temp=l.pop()
    result=int(result)
    if temp=='+':
        result+=int(l.pop())
    elif temp=='-':
        result-=int(l.pop())
    elif temp=='*':
        result*=int(l.pop())
    elif temp=='/':
        result/=int(l.pop())
    elif temp=='=':
        break

print(int(result))
