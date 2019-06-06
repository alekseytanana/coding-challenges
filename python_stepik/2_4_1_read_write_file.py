with open("dataset_24465_4.txt", "r") as f, open("reversed.txt", "w") as r:
    lines = []
    for line in f:
        lines.append(line.rstrip())
    while len(lines) > 0:
        r.write(lines.pop() + "\n")
		
		
# with open('dataset_24465_4.txt', 'r') as fr, open('dataset_24465_4_w.txt', 'w') as fw:
#     fw.writelines(fr.readlines()[::-1])