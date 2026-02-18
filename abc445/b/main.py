n = int(input())
s = [list(input().split()) for _ in range(n)]

lengths = [len(i[0]) for i in s]

dots = 0
for i in range(len(s)):
    dots = max(lengths) - lengths[i]
    out = "." * (dots//2) + s[i][0] + "." * (dots//2)
    print(out)