def mod_checker(x, mod=0):
    return lambda y: y % x == mod

# mod_checker = lambda x, mod=0: lambda y: y % x == mod