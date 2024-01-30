n, m, k = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(n)]

def drop_block():
    floor = -1
    s, e = k - 1, k + m - 1
    for i in range(n):
        for j in range(s, e):
            if arr[i][j] == 1:
                floor = i - 1
                break

        if floor != -1:
            break

    for i in range(s, e):
        arr[floor][i] = 1


drop_block()

for i in range(n):
    print(*arr[i])