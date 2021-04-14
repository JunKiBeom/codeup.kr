a=[int(x) for x in input().split()]
odd=[]
even=[]
for i in a:
    if(i%2==0):
        even.append(i)

for i in even:
    print(i)
