n, m, t = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(n)]
b_loc = []

# 구슬 위치 처리
for _ in range(m):
    x, y = map(int, input().split())
    b_loc.append((x - 1, y - 1))


# 격자 밖으로 벗어났는지 확인
def in_range(x, y):
    return 0 <= x < n and 0 <= y < n


# 구슬 리스트 교체
def remove_beads(temp):
    global b_loc

    b_loc = []

    for i in range(len(temp)):
        if temp[i] == (-1, -1):
            continue

        b_loc.append(temp[i])


# 구슬 한개 움직임
def move_bead(pos):

    x, y = pos

    dxs, dys = [-1, 1, 0, 0], [0, 0, -1, 1]
    max_n = 0
    max_pos = (-1, -1)

    for dx, dy in zip(dxs, dys):
        nx, ny = x + dx, y + dy

        if in_range(nx, ny) and arr[nx][ny] > max_n:
            max_n = arr[nx][ny]
            max_pos = (nx, ny)

    return max_pos


def simulate():

    b_temp = []

    for b in b_loc:
        loc = move_bead(b)

        if loc in b_temp:
            b_temp[b_temp.index(loc)] = (-1, -1)
            continue

        b_temp.append(loc)


    remove_beads(b_temp)



for _ in range(t):
    simulate()

print(len(b_loc))