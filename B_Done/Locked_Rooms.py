import sys
input = sys.stdin.readline

N = int(input())
L = list(map(int, input().split()))

place = 0
for i in range(len(L)):
    if L[i] == 1:
        place = i
        break

last_place = 0
for i in range(len(L) - 1, 0, -1):
    if L[i] == 1:
        last_place = i
        break

print(str(last_place - place))
