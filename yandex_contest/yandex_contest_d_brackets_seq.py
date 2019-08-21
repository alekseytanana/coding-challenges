n = int(input())

s = '('*n + ')'*n
#print(s)
res = [s]

while True:
    buf = ')'
    flag = False
    opened = 0
    closed = 0
    
    for c in s[::-1][1:-1]:
        if not flag:
            if c == ')':
                buf = buf + '('
                opened = opened + 1
            if c == '(':
                buf = buf + ')'
                closed = closed + 1
                flag = True
        else:
            buf = buf + c
            if c == ')':
                closed = closed + 1
            if c == '(':
                opened = opened + 1

    buf = buf + '('
    s = buf[::-1]
    if opened == closed:
        res.append(s)
#        print(s)
        if s == '()'*n:
            break

for r in res:
    print(r)
