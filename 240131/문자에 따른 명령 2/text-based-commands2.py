mission = list(input())

dxs, dys = [0, 1, 0, -1], [1, 0, -1, 0]
dir_n = 0
x, y = 0, 0

for m in mission:
    if m == 'L':
        dir_n = (dir_n + 3) % 4
    
    elif m == 'R':
        dir_n = (dir_n + 1) % 4

    else:
        x, y = x + dxs[dir_n], y + dys[dir_n]

    
print(x, y)