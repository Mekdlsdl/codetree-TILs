n = int(input())

visited = [0] * n
ans = []

def choose(cur_n):
    if cur_n == n + 1:
        print(*ans)
        return

    for i in range(n):
        if visited[i]:
            continue

        visited[i] = 1
        ans.append(i + 1)

        choose(cur_n + 1)

        ans.pop()
        visited[i] = 0

choose(1)