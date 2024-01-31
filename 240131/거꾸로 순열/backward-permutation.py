n = int(input())

ans = []
visited = [False] * (n + 1)

def choose(cur_n):
    if cur_n == n + 1:
        print(*ans)
        return

    for i in range(n, 0, -1):
        if visited[i]:
            continue

        ans.append(i)
        visited[i] = True

        choose(cur_n + 1)

        ans.pop()
        visited[i] = False

choose(1)