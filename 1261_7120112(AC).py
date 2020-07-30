a=[int (i) for i in input().split()]
cnt=0
for i in a:
    if i%5==0:
        print(i)
        cnt+=1
        exit()
    cnt+=1

if(cnt!=0):
    print(0)
