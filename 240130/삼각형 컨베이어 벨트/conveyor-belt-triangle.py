n, t = map(int, input().split())

u = list(map(int, input().split()))
m = list(map(int, input().split()))
d = list(map(int, input().split()))

for _ in range(t):

    temp = d[-1]

    for i in range(n - 1, 0, -1):
            d[i] = d[i - 1]
    d[0] = m[-1]

    for i in range(n - 1, 0, -1):
            m[i] = m[i - 1]
    m[0] = u[-1]

    for i in range(n - 1, 0, -1):
            u[i] = u[i - 1]
    u[0] = temp


print(*u)
print(*m)
print(*d)