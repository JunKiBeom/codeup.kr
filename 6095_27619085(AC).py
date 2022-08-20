pan = [[0 for i in range(19)] for j in range(19)]  # 19*19 사이즈의 2차원 리스트 0으로 초기화해서 생성

n = int(input())  # 입력 받을 횟수
for i in range(n):
    x, y = map(int, input().split())
    pan[x-1][y-1] = 1

for i in range(19):
    for j in range(19):
      print(pan[i][j], end=" ")
    print()
