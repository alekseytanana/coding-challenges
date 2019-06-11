import re
import sys

for line in sys.stdin:
    line = line.rstrip()
    pattern = r".*(cat).*(cat).*"
    result = re.match(pattern, line)
    if result:
        print(line)

    # if len(re.findall(r"cat", line)) > 1:
    #     print(line)
    