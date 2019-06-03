def is_parent(dic, child, parent):
    if child == parent:
        return True
    for e in dic[child]:
        if is_parent(dic, e, parent):
            return True
    return False


n = int(input())

parents = {}
for _ in range(n):
    a = input().split()
    parents[a[0]] = [] if len(a) == 1 else a[2:]

m = int(input())

exceptions = []
for _ in range(m):
    e = input()
    for e_parent in exceptions:
        if is_parent(parents, e, e_parent):
            print(e)
            break
    exceptions.append(e)
