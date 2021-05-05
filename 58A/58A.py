s = input()
w = 'hello'
j = -1

for i in w:
    j = s.find(i, j+1)
    if j == -1:
        print('NO')
        quit()
print('YES')
