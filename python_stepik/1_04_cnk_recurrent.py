def cnk(n, k):
    if k == 0:
        return 1
    if k > n:
        return 0
    return cnk(n-1, k) + cnk(n-1, k-1)

n, k = map(int, input().split())
print(cnk(n, k))