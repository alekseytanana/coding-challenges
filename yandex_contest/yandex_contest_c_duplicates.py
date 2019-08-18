n = int(input())
res = []

for _ in range(n):
    i = int(input())
    if not res or i != res[-1]:
        res.append(i)

for i in res:
    print(i)

# METHOD 2
#n = int(input())
#res = []
#
#for _ in range(n):
#    i = int(input())
#    if i not in res:
#        res.append(i)
#
#for i in res:
#    print(i)

# METHOD 3
#n = int(input())
#buf = None
#res = []
#
#for _ in range(n):
#    i = int(input())
#    if buf:
#        if i > buf:
#            res.append(i)
#            buf = i
#    else:
#        res.append(i)
#        buf = i
#
#for i in res:
#    print(i)
