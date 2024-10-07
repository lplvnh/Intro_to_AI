
n = int(input())

v = list(map(int, input().split()))

cnt = 0  
cnt1 = 0  
s = 0  
s1 = 0  

for x in v:
    if x % 2 == 0:
        cnt += 1
        s += x
    else:
        cnt1 += 1
        s1 += x


print(cnt)
print(cnt1)
print(s)
print(s1)