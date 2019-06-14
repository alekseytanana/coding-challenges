import csv

crimes = []
max = 0
max_crime = ""

with open("Crimes.csv") as f:
    reader = csv.DictReader(f)

    for line in reader:
        crimes.append(line["Primary Type"])

for crime in crimes:
    if crimes.count(crime) > max:
        max = crimes.count(crime)
        max_crime = crime

print(max_crime)
