a=[int(x) for x in input().split()]
odd=[]
even=[]
for i in a:
    if i%2==0 and i<0:
        print("A")
    elif i%2!=0 and i<0:
        print("B")
    elif i%2==0 and i>0:
        print("C")
    elif i%2!=0 and i>0:
        print("D")
