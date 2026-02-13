n, a, b = map(int, input().split())
s = list(input().strip())

for i in range(a + b):
    if (s[i] == a):
        a_count += 1
    elif (s[i] == b):
        b_count += 1

