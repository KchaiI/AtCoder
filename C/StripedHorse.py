# cost = [0] * (2*W + 1)

# for i in range(1, N+1):
#     c = C[i]
#     start = (-i) % (2*W)
#     end = start + W

#     if end <= 2*W:
#         cost[start] += c
#         cost[end] -= c
#     else:
#         cost[start] += c
#         cost[2*W] -= c
#         cost[0] += c
#         cost[end - 2*W] -= c

# ans = INF
# cur = 0
# for x in range(2*W):
#     cur += cost[x]
#     ans = min(ans, cur)

# print(ans)


import sys
input = sys.stdin.readline

T = int(input())

for _ in range(T):
    N, W = map(int, input().split())
    C = list(map(int, input().split()))

    size = 2 * W
    cost = [0] * (size + 1)

    for idx in range(N):
        i = idx + 1
        c = C[idx]

        start = (-i) % size
        end = start + W

        if end <= size:
            cost[start] += c
            cost[end] -= c
        else:
            cost[start] += c
            cost[size] -= c
            cost[0] += c
            cost[end - size] -= c

    ans = 10**30
    cur = 0
    for x in range(size):
        cur += cost[x]
        if cur < ans:
            ans = cur

    print(ans)
