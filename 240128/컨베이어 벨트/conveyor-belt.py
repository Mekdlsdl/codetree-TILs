n, t = map(int, input().split())

arr = [list(map(int, input().split())) for _ in range(2)]

arr1 = []

for i in range(2):
    for j in range(n):
        arr1.append(arr[i][j])


while (t>0):
    temp = arr1[-1]

    for i in range(len(arr1) - 1, 0, -1):
        arr1[i] = arr1[i - 1]

    arr1[0] = temp

    t -= 1

for i in range(n):
    print(arr1[i], end=' ')
print()
for i in range(n,n*2):
    print(arr1[i], end=' ')