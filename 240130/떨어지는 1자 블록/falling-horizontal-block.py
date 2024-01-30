n, m, k = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(n)]

def drop_block():
    floor = n + 1
    s, e = k - 1, k + m - 1
    for i in range(s, e):
        for j in range(n):
            if arr[j][i] == 1:
                floor = min(j - 1, floor)
                break

    if floor == n + 1:
        floor = n - 1

    for i in range(s, e):
        arr[floor][i] = 1


drop_block()

for i in range(n):
    print(*arr[i])