n, m = map(int, input().split())

graph = [[] for _ in range(n + 1)]
visited = [False] * (n + 1)

for _ in range(m):
    x, y = map(int, input().split())
    graph[x].append(y)
    graph[y].append(x)

cnt = 0

def dfs(vertex):
    global cnt, visited

    for cv in graph[vertex]:
        if not visited[cv]:
            visited[cv] = True
            dfs(cv)

dfs(1)
visited[1] = False

cnt = 0

for i in range(n + 1):
    if visited[i] == True:
        cnt += 1

print(cnt)