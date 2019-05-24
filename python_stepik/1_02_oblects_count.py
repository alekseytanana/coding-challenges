ans = 0
objects = [1,5,3,6,5,4,1,4,23,5,4,3]
seen = set()

for obj in objects:
    if id(obj) in seen:
        continue
    else:
        seen.add(id(obj))
        ans += 1

print(ans)

# print(len(set(id(i) for i in objects)))