k, n = map(int, input().split())

ans = []

def print_ans():
    print(*ans)

def choose(c_num):
    if c_num >= n + 1:
        print_ans()
        return
    
    for i in range(k):
        ans.append(i + 1)
        choose(c_num + 1)
        ans.pop()

choose(1)