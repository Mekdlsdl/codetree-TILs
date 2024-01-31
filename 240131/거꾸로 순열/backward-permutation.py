n = int(input())

ans = []
visited = [0] * (n + 1)

def choose(cur_n):
    if cur_n == n + 1:
        print(*ans)
        return

    for i in range(n, 0, -1):
        if visited[i]:
            continue

        ans.append(i)
        visited[i] = 1

        choose(cur_n + 1)

        ans.pop()
        visited[i] = 0

choose(1)