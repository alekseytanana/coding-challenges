import re
import sys

for line in sys.stdin:
    line = line.rstrip()
    pattern = r".*?\b(cat)\b.*?"
    if re.match(pattern, line): # re.search(r"\bcat\b", line)
        print(line)
