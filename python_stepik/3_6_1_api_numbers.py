import requests

while True:
    num = input()
    api_url = f"http://numbersapi.com/{num}/math?json=true"

    res = requests.get(api_url)
    # print(res.text)
    data = res.json()
    if data["found"]:
        print("Interesting")
    else:
        print("Boring")
