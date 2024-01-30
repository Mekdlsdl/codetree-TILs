n, m = map(int, input().split())
arr = [ list(map(int, input().split())) for _ in range(n) ]

ans = 0

def happy_prog_row(row):
    global ans

    for i in range(n - m + 1):
        cnt = 0
        num = arr[row][i]

        for j in range(i, n):
            if arr[row][j] != num:
                break
            cnt += 1

        if cnt >= m:
            ans += 1
            break

def happy_prog_col(col):
    global ans

    for i in range(n - m + 1):
        cnt = 0
        num = arr[i][col]

        for j in range(i, n):
            if arr[j][col] != num:
                break
            cnt += 1

        if cnt >= m:
            ans += 1
            break

for i in range(n):
    happy_prog_row(i)
    happy_prog_col(i)

print(ans)