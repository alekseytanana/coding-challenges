s = input()
t = input()
c = 0

for i in range(len(s)):
    if s[i:].startswith(t):
        c += 1

print(c)
