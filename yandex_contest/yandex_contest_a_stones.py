with open("input.txt", "r") as file:
    lines = []
    for line in file:
        lines.append(line.strip())
    j = lines[0]
    s = lines[1]

    n = []
    for i in j:
        if i not in n:
            n.append(i)

    j = n

    count = 0
    for x in j:
        for y in s:
            if x == y:
                count = count + 1
print count




#import sys
#
#j = sys.stdin.readline().strip()
#s = sys.stdin.readline().strip()
#
#result = 0
#for ch in s:
#    if ch in j:
#        result += 1
#
#print result
