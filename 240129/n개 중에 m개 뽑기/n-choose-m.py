n, m = map(int, input().split())
ans = []

def choose(c_num, cnt):
    if c_num == m + 1:
        print(*ans)

    for i in range(cnt, n):
        ans.append(i + 1)
        choose(c_num + 1, i + 1)
        ans.pop()

choose(1, 0)