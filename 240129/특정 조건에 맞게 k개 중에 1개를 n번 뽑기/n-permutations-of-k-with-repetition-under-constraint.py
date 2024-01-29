k, n = map(int, input().split())
ans = []

def not_print():
    cnt = 0
    for i in range(len(ans) - 1):
        if ans[i] == ans[i + 1]:
            cnt += 1
        else:
            cnt = 0
    
    return cnt
        

def choose(c_num):
    if not_print() >= 2:
            return

    if c_num >= n + 1:
        print(*ans)
        return

    for i in range(k):
        ans.append(i + 1)
        choose(c_num + 1)
        ans.pop()


choose(1)