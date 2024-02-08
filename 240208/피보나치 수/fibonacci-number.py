n = int(input())

memo = [0] * (n + 2)

memo[1] = memo[2] = 1

def fibo(n):
    if memo[n] != 0:
        return memo[n]

    memo[n] = fibo(n - 1) + fibo(n - 2)
    return memo[n]

fibo(n)
print(memo[n])