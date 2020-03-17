n = int(input())
cnt = -1
c1=0
c0=0
array=list(map(int,input().split()))
for x in range(n):
    if(array[x]==1):
        c1+=1
        if(c0!=0):
            c0-=1
    else:
        c0+=1
        if(c0>cnt):
            cnt=c0
print(c1+cnt)

