import itertools

def primes():
    yield 2
    n = 2
    while True:
        n += 1
        prime = True
        for i in range(2, n):
            if n % i == 0:
                prime = False
                break
        if prime:
            yield n


print(list(itertools.takewhile(lambda x : x <= 31, primes())))