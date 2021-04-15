n = [int(x) for x in input().split()]

sum = n[0]
while (n[0] >= n[1]):
    x = int(n[0] / n[1])
    sum += x
    n[0] = x + int(n[0] % n[1])

print(sum)
