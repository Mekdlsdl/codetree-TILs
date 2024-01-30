n, m = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(n)]

dxs, dys = [-1, -1, -1, 0, 0, 1, 1, 1], [-1, 0, 1, -1, 1, -1, 0, 1]

def in_range(x, y):
    return x >= 0 and x < n and y >= 0 and y < n


def change_loc(ori_pos, new_pos, num):
    x, y = ori_pos
    nx, ny = new_pos

    arr[x][y] = arr[nx][ny]
    arr[nx][ny] = num


def find_max(num):
    nf = False

    for i in range(n):
        for j in range(n):

            if nf:
                break

            if arr[i][j] == num:
                nf = True
                
                max_n = 0
                max_pos = (i, j)

                for dx, dy in zip(dxs, dys):
                    nx, ny = i + dx, j + dy

                    if in_range(nx, ny) and arr[nx][ny] > max_n:
                        max_n = arr[nx][ny]
                        max_pos = (nx, ny)

                change_loc((i, j), max_pos, num)


for _ in range(m):
    for i in range(1, n * n + 1):
        find_max(i)

for i in range(n):
    print(*arr[i])