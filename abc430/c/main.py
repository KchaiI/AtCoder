import sys
input = sys.stdin.readline

n, a, b = map(int, input().split())
s = input().strip()

ra = [n] * n
ra = 0
cnt_a = 0
for l in range(n):
    while cnt_a < a and ra < n:
        if s[ra] == 'a':
            cnt_a += 1
        ra += 1
    if cnt_a >= a:
        ra[l] = ra - 1
    if s[l] == 'a':
        cnt_a -= 1
