s = input()
c1=0
c0=0
for i in range(0,len(s)):
    if s[i] == '0':
        c0 += 1
        c1 = 0
    if s[i] == '1':
        c1 += 1
        c0 = 0
    if c1==7 or c0==7:
        print('YES')
        quit()
if c1<7 or c0<7:
    print("NO")
