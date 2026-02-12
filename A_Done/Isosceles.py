array = list(map(int, input().split()))

newarray = sorted(array)

if (newarray[0] == newarray[1]) or (newarray[1] == newarray[2]):
    print("Yes")
else:
    print("No")