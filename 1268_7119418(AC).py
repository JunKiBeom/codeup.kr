n=input()
list=[int(i) for i in input().split()]
cnt=0
for i in list:
    if i%2==0:
        cnt+=1
print(cnt)
