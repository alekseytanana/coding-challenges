c = 0

s = str(input())
a = str(input())
b = str(input())

while True:
    if a not in s:
        break
    else:
        s = s.replace(a, b)
        c += 1

    if c > 1000:
        break

#print(s, a, b)

if c <= 1000:
    print(c)
else:
    print("Impossible")
