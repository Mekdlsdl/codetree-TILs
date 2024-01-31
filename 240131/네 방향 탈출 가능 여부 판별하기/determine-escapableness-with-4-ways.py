from collections import deque

n, m = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(n)]

q = deque()
visited = [[0] * m for _ in range(n)]
dxs, dys = [-1, 1, 0, 0], [0, 0, -1, 1]


def in_range(x, y):
    return 0 <= x < n and 0 <= y < m


def can_go(x, y):
    return in_range(x, y) and arr[x][y] and not visited[x][y]


def bfs():
    while q:
        cv = q.popleft()
        x, y = cv

        for dx, dy in zip(dxs, dys):
            nx, ny = x + dx, y + dy

            if can_go(nx, ny):
                visited[nx][ny] = 1
                q.append((nx, ny))


q.append((0, 0))
visited[0][0] == 1
bfs()

print(visited[n - 1][m - 1])