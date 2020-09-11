a=list(map(int,input().split()))
count = 0
while(True):
    if a[0]>a[1]:
        break
    else:
        a[0] = a[0]*3
        a[1] = a[1]*2
        count=count+1

print(count)