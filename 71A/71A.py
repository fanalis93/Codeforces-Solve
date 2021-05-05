n = int(input())
for i in range(n):
    s = input()
    s1 = s
    if len(s) > 10:
        s1 = s[0] + str(len(s)-2) + s[len(s)-1]
        print(s1)
    else:
        print(s1)
