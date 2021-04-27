n = int(input())
s = str(n)
c = 0
for i in range(0, len(s)):
    if s[i] == '4' or s[i] == '7':
        c += 1
if c == len(s):
    print('YES')
elif n % 4 == 0 or n % 7 == 0 or n % 47 == 0:
    print('YES')
else:
    print('NO')
