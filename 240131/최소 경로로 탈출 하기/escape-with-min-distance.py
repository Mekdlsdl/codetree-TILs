from collections import deque

n, m = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(m)]

q = deque()
visited = [[False] * m for _ in range(n)]
dist = [[-1] * m for _ in range(n)]

dxs, dys = [-1, 1, 0, 0], [0, 0, -1, 1]


def in_range(x, y):
    return 0 <= x < n and 0 <= y < m


def can_go(x, y):
    return in_range(x, y) and not visited[x][y] and arr[x][y]


def push(x, y, d):
    dist[x][y] = d
    visited[x][y] = True
    q.append((x, y))


def bfs():
    global dist

    while q:
        x, y = q.popleft()

        for dx, dy in zip(dxs, dys):
            nx, ny = x + dx, y + dy

            if can_go(nx, ny):
                push(nx, ny, dist[x][y] + 1)


push(0, 0, 0)
bfs()

print(dist[n - 1][m - 1])