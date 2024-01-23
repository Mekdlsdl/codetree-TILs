n = int(input())
arr = [list(map(int, input().split())) for _ in range(n)]

total = 0

# x, y = 0, 0
dx, dy = [0, 1, 0, -1], [1, 0, -1, 0]

def in_range(x, y):
    return x >= 0 and x < n and y >= 0 and y < n

for x in range(n):
    for y in range(n):
        cnt = 0
        for i in range(4):
            nx, ny = x + dx[i], y + dy[i]

            if in_range(nx, ny) and arr[nx][ny]:
                cnt += 1

        if cnt >= 3:
            total += 1

print(total)