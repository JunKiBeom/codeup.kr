pan=[[0]*19]*19  # 19*19 사이즈의 2차원 리스트 0으로 초기화해서 생성
for i in range(19):
    pan[i]=list(map(int, input().split()))  # 입력받은 data List로 변경해서 pan에 넣어주기

n = int(input()) # 입력 받을 횟수
for i in range(n):
    x,y = map(int, input().split())

    for j in range(19):
        if pan[j][y-1]==0:
            pan[j][y-1]=1
        else:
            pan[j][y-1]=0
        if pan[x-1][j]==0:
            pan[x-1][j]=1
        else:
            pan[x-1][j]=0

for i in range(19):
    for j in range(19):
        print(pan[i][j],end=" ")
    print()


