Map = [[] * 10 for _ in range(10)]
for i in range(10):
    Map[i] = list(map(int, input().split()))
x, y = 1, 1

while (True):
    if (Map[x][y] == 2):
        Map[x][y] = 9
        break
    if (Map[x][y + 1] != 1):
        Map[x][y] = 9
        y += 1
    else:
        if (Map[x + 1][y] != 1):
            Map[x][y] = 9
            x += 1
        else:
            Map[x][y]=9
            break

# print("\\\\\\\\\\\\\\\\")
for i in range(10):
    for j in range(10):
        print(Map[i][j], end=' ')
    print()

