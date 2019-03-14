k,h=input().split()
k,h=int(k),int(h)
loop,cnt=1,1
list=[]
while loop!=100000:
    if cnt%2==0:
        list.append(loop*10)
        loop+=1
    else:
        list.append(loop)
    cnt+=1

print(list[k-1]+list[h-1])
