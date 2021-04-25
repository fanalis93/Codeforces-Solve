s = [int(x) for x in input().split()]
ans = 0

for i in range(0, s[0]):
    for j in range(0, s[0]):
        tmp = s[0]-i-j
        if tmp < 0:
            continue
        if i % s[1] == 0 and j % s[2] == 0 and tmp % s[3] == 0:
            tmp2 = int(i/s[1] + j/s[2] + tmp/s[3])
            ans = max(ans, tmp2)
print(ans)
