import requests
import re

r = input()
# r = "http://pastebin.com/raw/7543p0ns"

r = requests.get(r)
pattern = r"<a.+?href=[\"\'](.+?)[\"\'].*?>"
links = re.findall(pattern, r.text)

sites = []

for link in links:
    # print(link)
    if link.startswith(".."):
        continue
    if "//" in link:
        link = link.split("//")[1]
    site = link.split("/")[0].split(":")[0]
    if len(site) > 0 and site not in sites:
        sites.append(site)

for s in sorted(sites):
    print(s)
