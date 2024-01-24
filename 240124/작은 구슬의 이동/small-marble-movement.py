n, t = map(int, input().split())
r, c, d = input().split()
r, c = int(r), int(c)

dr, dc = [-1, 0, 1, 0], [0, 1, 0, -1]
mapper = {'U':0, 'D':2, 'R':1, 'L':3}
dir_num = mapper[d]

def in_range(x, y):
    return x > 0 and x <= n and y > 0 and y <= n

for _ in range(t):
    nr, nc = r + dr[dir_num], c + dc[dir_num]

    if not in_range(nr, nc):
        dir_num = (dir_num + 2) % 4

    else:
        r, c = nr, nc

print(r, c)