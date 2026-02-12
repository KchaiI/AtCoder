N, Q = map(int, input().split())
    
Ai = [int(n) for n in input().split()]

xy = [[int(i) for i in input().split()] for n in range(Q)]

compari = []

for i in range(Q):
    compari.append(xy[i][0] + xy[i][1] - 1)


for i in range(len(Ai)):
    a = 0
    count = 0
    if Ai[i] <= compari[a] and Ai[i] >= xy[a][0]:
        count += 1

    a += 1

    print(compari[i] + count)

