x, y = input().split()

os = {'Ocelot': 0, 'Serval': 1, 'Lynx': 2}

if (os[x] >= os[y]):
    print("Yes")
else:
    print("No")