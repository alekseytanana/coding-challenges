d = {'global': {'parent': None, 'vars': []}}
c = int(input())

def get(namesp, var):
    if var in d[namesp]['vars']:
        return namesp
    else:
        if namesp == 'global':
            return 'None'
        return get(d[namesp]['parent'], var)

for _ in range(c):
    func, namesp, var = input().split()
    if func == 'create':
        d[namesp] = {'parent': var, 'vars': []}
    if func == 'add':
        d[namesp]['vars'].append(var)
    if func == 'get':
        print(get(namesp, var))