n = int(input())
arr = [list(map(int, input().split())) for _ in range(n)]
r, c = map(int, input().split())
r, c = r - 1, c - 1
b_num = arr[r][c]

def in_range(x):
    return x >= 0 and x < n

def bomb_arr():
    for i in range(r - b_num + 1, r + b_num):
        if not in_range(i):
            continue
        arr[i][c] = 0
        
    for i in range(c - b_num + 1, c + b_num):
        if not in_range(i):
            continue
        arr[r][i] = 0

def remove_brk():
    s, e = c - b_num + 1, c + b_num

    if s < 0:
        s = 0
    if e > n:
        e = n

    for i in range(s, e):
        temp = []
        for j in range(n - 1, -1, -1):
            if arr[j][i] == 0:
                continue
            temp.append(arr[j][i])

        for k in range(n - len(temp)):
            temp.append(0)

        for w in range(n):
            arr[w][i] = temp[n - w - 1]



bomb_arr()
remove_brk()


for i in range(n):
    print(*arr[i])