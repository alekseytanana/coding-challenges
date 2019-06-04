import datetime

y, m, d = map(int, input().split())
date = datetime.date(y, m, d) + datetime.timedelta(int(input()))

print(date.year, date.month, date.day)
