import re
S = input()

Stage = re.findall(r'\d+', S)
num_S = [int(s) for s in Stage]

if (num_S[1] == 8):
    a = 1
    b = num_S[0] + 1
else:
    a = num_S[1] + 1
    b = num_S[0]

print(str(b)+'-'+str(a))