import re
import sys

for line in sys.stdin:
    line = line.strip()
    print(re.sub(r"\b(\w*?)(\w)(\2+)(\w*?)\b", r"\1\2\4", line))
    # print(re.sub(r"(\w)\1+", r"\1", line))
