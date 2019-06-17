import requests
import json


client_id = '81e8b71c46b17187ee4f'
client_secret = 'efea8c584fc5aa190c0f65b295460868'

# получение токена
r = requests.post("https://api.artsy.net/api/tokens/xapp_token",
                  data={
                      "client_id": client_id,
                      "client_secret": client_secret
                  })
j = json.loads(r.text)
token = j["token"]
headers = {"X-Xapp-Token" : token}

# читаем id имен из файла
with open('name_ids.txt', 'r') as f:
    names = []
    for line in f:
        names.append(line.strip())

# names = ['4df3ce2bd85a53000100243b']
result = []

for name in names:
    r = requests.get(f"https://api.artsy.net/api/artists/{name}", headers=headers)
    r.encoding = 'utf-8'
    j = json.loads(r.text)
    # print(r.text)
    try:
        result.append(f"{j['birthday']} {j['sortable_name']}")
    except:
        print("Wrong response")

result = sorted(result)

for r in result:
    print(r[5:])
