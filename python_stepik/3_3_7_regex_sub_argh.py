import re
import sys

for line in sys.stdin:
    line = line.rstrip()
    print(re.sub(r"\b[Aa]+?\b", "argh", line, count=1))
    # print(re.sub(r"\ba+\b", "argh", line, count=1, flags=re.IGNORECASE))
