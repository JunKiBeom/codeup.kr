﻿h, w = map(int, input().split())
pan = [[0] * w for _ in range(h)]

n = int(input())
for i in range(n):
    l, d, x, y = map(int, input().split())

    for j in range(l):
        if d == 0:
            pan[x - 1][y - 1 + j] = 1
        else:
            pan[x - 1 + j][y - 1] = 1

for i in range(h):
    for j in range(w):
        print(pan[i][j], end=" ")
    print()

