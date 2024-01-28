n = int(input())
block = [int(input()) for _ in range(n)]
s1, e1 = map(int, input().split())
s2, e2 = map(int, input().split())

temp = [0 for _ in range(n)]
cnt = 0
for i in range(n):
    if i >= s1 - 1 and i <= e1 - 1:
        continue
    temp[cnt] = block[i]
    cnt += 1

temp1 = [0 for _ in range(cnt)]

cnt1 = 0
for i in range(cnt):
    if i >= s2 - 1 and i <= e2 - 1:
        continue
    temp1[cnt1] = temp[i]
    cnt1 += 1

print(cnt1)
for t in temp1:
    if t == 0:
        continue
    print(t)