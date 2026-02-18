import sys
input = sys.stdin.readline

N = int(input())
A = [0] + list(map(int, input().split()))  # 1-indexed

f = [0] * (N + 1)

for i in range(N, 0, -1):
    if A[i] == i:
        f[i] = i
    else:
        f[i] = f[A[i]]

print(" ".join(map(str, f[1:])))