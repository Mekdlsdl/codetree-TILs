n = int(input())

x, y = 0, 0

idx = {'W':0, 'S':1, 'N':2, 'E':3}
dx = [-1, 0, 0, 1]
dy = [0, -1, 1, 0]

for _ in range(n):
    dir, dis = input().split()
    dis = int(dis)

    x += dx[idx[dir]] * dis
    y += dy[idx[dir]] * dis

print(x, y)