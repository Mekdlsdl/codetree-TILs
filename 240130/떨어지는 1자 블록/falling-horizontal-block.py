n, m, k = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(n)]

def drop_block():
    floor = n + 1
    s, e = k - 1, k + m - 1
    for i in range(s, e):
        for j in range(n - 1, -1, -1):
            if arr[j][i] == 0:
                floor = min(j, floor)
                break

    for i in range(s, e):
        arr[floor][i] = 1


drop_block()

for i in range(n):
    print(*arr[i])