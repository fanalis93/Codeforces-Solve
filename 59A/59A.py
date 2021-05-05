s = input()
low = 0
up = 0
for i in range(0, len(s)):
    if s[i].islower():
        low += 1
    elif s[i].isupper():
        up += 1
if low < up:
    s = s.upper()
elif low > up:
    s = s.lower()
elif low == up:
    s = s.lower()
print(s)
