import requests

api_url = "http://api.openweathermap.org/data/2.5/weather"

# city = input("City? ")
city = 'Gusev'
# city = 'Singapore'

params = {
    'q': city,
    'appid': '11c0d3dc6093f7442898ee49d2430d20',
    'units': 'metric'
}

res = requests.get(api_url, params=params)
# print(res.json())

data = res.json()

print(f"Current temperature in {city} is {data['main']['temp']}")
