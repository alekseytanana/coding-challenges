from xml.etree import ElementTree


def scores(root, val=1):
    rgb = [0, 0, 0]
    color = root.get('color')
    if color == 'red':
        rgb[0] += val
    if color == 'green':
        rgb[1] += val
    if color == 'blue':
        rgb[2] += val
    for child in root:
        child_scores = scores(child, val+1)
        rgb[0] += child_scores[0]
        rgb[1] += child_scores[1]
        rgb[2] += child_scores[2]
    return rgb

# xml = r'<cube color="blue"><cube color="red"><cube color="green"></cube></cube><cube color="red"></cube></cube>'
xml = input()

root = ElementTree.fromstring(xml)

rgb = scores(root)
print(f"{rgb[0]} {rgb[1]} {rgb[2]}")
