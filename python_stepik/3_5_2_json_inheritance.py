import json


def is_child(d, parent, child):
    if child == parent:
        return True
    for c in d[child]:
        if c == parent:
            return True
        if len(d[c]) > 0:
            for val in d[c]:
                if is_child(d, parent, val):
                    return True
    return False


def children_count(d, parent):
    c = 0
    for cl in d:
        if is_child(d, parent, cl):
            c += 1
    return c


js = json.loads(input())
# js = json.loads('[{"name": "B", "parents": ["A", "C"]}, {"name": "C", "parents": ["A"]}, {"name": "A", "parents": []}, {"name": "D", "parents":["C", "F"]}, {"name": "E", "parents":["D"]}, {"name": "F", "parents":[]}]')
# js = json.loads('[{"name": "A", "parents": []}, {"name": "B", "parents": ["A", "C"]}, {"name": "C", "parents": ["A"]}]')
d = {}

for el in js:
    d[el["name"]] = el["parents"]

for cl in sorted(d):
    print(f"{cl} : {children_count(d, cl)}")
