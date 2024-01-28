n = int(input())
block = [int(input()) for _ in range(n)]
s1, e1 = map(int, input().split())
s2, e2 = map(int, input().split())

temp = []
for i in range(n):
    if i < s1 - 1 or i > e1 - 1:
        temp.append(block[i])
    
temp1 = []

for i in range(len(temp)):
    if i < s2 - 1 or i > e2 - 1:
        temp1.append(temp[i])
    

print(len(temp1))
for t in temp1:
    if t == 0:
        continue
    print(t)