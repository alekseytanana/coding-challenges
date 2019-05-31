n = int(input())
classes = {}


def is_subclass(dic, subclass, superclass):
    if subclass == superclass:
        return "Yes"
    for c in dic[subclass]:
        if c == superclass:
            return "Yes"
        if len(dic[c]) > 0:
            for val in dic[c]:
                if is_subclass(dic, val, superclass) == "Yes":
                    return "Yes"
    return "No"


for _ in range(n):
    s = input()
    if " : " in s:
        k, v = s.split(" : ")
        classes[k] = v.split(' ')
    else:
        classes[s] = []

q = int(input())

for _ in range(q):
    sup, sub = input().split(' ')
    print(is_subclass(classes, sub, sup))


# ALTERNATIVE
#
# n = int(input())
#
# parents = {}
# for _ in range(n):
#     a = input().split()
#     parents[a[0]] = [] if len(a) == 1 else a[2:]
#
# def is_parent(child, parent):
#     return child == parent or any(map(lambda p: is_parent(p, parent), parents[child]))
#
# q = int(input())
# for _ in range(q):
#     a, b = input().split()
#     print("Yes" if is_parent(b, a) else "No")