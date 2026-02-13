h, w = map(int, input().split())
s = [input().strip() for _ in range(h)]

dirs = [(-1, 0), (1, 0), (0, -1), (0, 1)]

cnt = 0
for i in range(h):
    for j in range(w):
        if s[i][j] == '#':
            cnt = 0
            for dx, dy in dirs:
                nx, ny = i + dx, j + dy
                if 0 <= nx < h and 0 <= ny < w and s[nx][ny] == '#':
                    cnt += 1
            if cnt != 2 and cnt != 4:
                print("No")
                exit()

print("Yes")