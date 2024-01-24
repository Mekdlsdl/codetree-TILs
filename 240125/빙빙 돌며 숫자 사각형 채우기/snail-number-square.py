n, m = map(int, input().split())

answer = [[0] * m for _ in range(n)]


def in_range(x, y):
    return x >= 0 and x < n and y >= 0 and y < m

dx, dy = [0, 1, 0, -1], [1, 0, -1, 0]
dir_num = 0
x, y = 0, 0
answer[0][0] = 1


for i in range(2, n * m + 1):
    nx, ny = x + dx[dir_num], y + dy[dir_num]

    if in_range(nx, ny) and answer[nx][ny] == 0:
        x, y = nx, ny
    
    else:
        dir_num = (dir_num + 1) % 4
        x, y = x + dx[dir_num], y + dy[dir_num]

    answer[x][y] = i


for j in range(n):
    for k in range(m):
        print(answer[j][k], end = ' ')
    print()