n, m = map(int, input().split())

s = [input() for i in range(n)]
grid_set = set()

for i in range(n - m + 1):
    for j in range(n - m + 1):
        for ii in range(i, i + m):
            grid = tuple(s[ii][j:j + m])
            grid_set.add(grid)

print(len(grid_set))