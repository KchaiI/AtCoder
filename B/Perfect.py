import sys
input = sys.stdin.readline

N, M, K = map(int, input().split())
AB = [list(map(int, input().split())) for _ in range(K)]

ans_box = []
for i in range(K):
    