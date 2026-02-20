import sys
input = sys.stdin.readline

h, w, n = map(int, input().split())
hw = [list(map(int, input().split())) for _ in range(n)]

plot = []

for _ in range(n):
    for i in range(n):
        a, b = hw[i]
        if a == 0 and b == 0:
            continue

        if a == h:
            plot.append([h - a + 1, w - b + 1])
            w -= b
            hw[i] = [0, 0]
            break

        elif b == w:
            plot.append([h - a + 1, w - b + 1])
            h -= a
            hw[i] = [0, 0]
            break

for x, y in plot:
    print(x, y)