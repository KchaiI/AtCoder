N = int(input())
T = list(map(int, input().split()))

order = sorted(range(N), key=lambda i: T[i])

print(order[0] + 1, order[1] + 1, order[2] + 1)
