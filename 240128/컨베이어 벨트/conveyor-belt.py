n, t = map(int, input().split())
u = list(map(int, input().split()))
d = list(map(int, input().split()))

while t > 0:
    temp = u[-1]

    for i in range(n-1, 0, -1):
        u[i] = u[i-1]

    u[0] = d[-1]

    for j in range(n-1, 0, -1):
        d[j] = d[j-1]

    d[0] = temp

    t -= 1

print(*u)
print(*d)