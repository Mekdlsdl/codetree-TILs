n = int(input())

x, y = 0, 0

inx = ['W', 'S', 'N', 'E']
dx = [-1, 0, 0, 1]
dy = [0, -1, 1, 0]

for _ in range(n):
    dir, dis = input().split()
    dis = int(dis)

    x += dx[inx.index(dir)] * dis
    y += dy[inx.index(dir)] * dis

print(x, y)