n = input()
res = 0
cur_seq = 0

for _ in range(int(n)):
    i = input()
    if int(i) == 1:
        cur_seq = cur_seq + 1
    elif cur_seq > res:
        res = cur_seq
        cur_seq = 0
    else:
        cur_seq = 0

if cur_seq > res:
    res = cur_seq

print(res)
