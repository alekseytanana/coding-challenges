import requests
import re

r1 = input()
r2 = input()
# r1 = "https://stepic.org/media/attachments/lesson/24472/sample0.html"
# r2 = "https://stepic.org/media/attachments/lesson/24472/sample2.html"

pattern = r"href=\"(.+)\""

r1 = requests.get(r1)
r1_links = re.findall(pattern, r1.text)

ans = "No"

for r3 in r1_links:
    try:
        r3 = requests.get(r3)
        if r2 in re.findall(pattern, r3.text):
            ans = "Yes"
            break
    except:
        pass

print(ans)
