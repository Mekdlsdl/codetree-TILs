n = int(input())
arr = [list(map(int, input().split())) for _ in range(n)]

max_coin = 0

def get_coin(col_s, col_e, row_s, row_e):
    num_coin = 0

    for row in range(row_s, row_e + 1):
        for col in range(col_s, col_e + 1):
            num_coin += arr[row][col]

    return num_coin


for row in range(n):
    for col in range(n):

        if row + 2 >= n or col + 2 >= n:
            continue

        num_coin = get_coin(col, col + 2, row, row + 2)

        max_coin = max(num_coin, max_coin)

print(max_coin)