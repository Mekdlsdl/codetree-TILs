n, r, c = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(n)]
r, c = r - 1, c - 1
max_pos = (r, c)

dxs, dys = [-1, 1, 0, 0], [0, 0, -1, 1]

def in_range(x, y):
    return x >= 0 and x < n and y >= 0 and y < n

while True:
    print(arr[r][c], end = ' ')

    for dx, dy in zip(dxs, dys):
        nx, ny = r + dx, c + dy

        if in_range(nx, ny) and arr[nx][ny] > arr[r][c]:
            max_pos = (nx, ny)
            break

    if (r, c) == max_pos:
        break

    r, c = max_pos