n = int(input())
mishka = 0
chris = 0
for i in range(n):
    s = [int(x) for x in input().split()]
    if s[0] > s[1]:
        mishka += 1
    elif s[0] < s[1]:
        chris += 1

if mishka > chris:
    print('Mishka')
elif mishka < chris:
    print('Chris')
elif mishka == chris:
    print('Friendship is magic!^^')
