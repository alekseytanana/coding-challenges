def closest_mod_5(x):
    while x % 5 != 0:
        x += 1
    return x

# closest_mod_5 = lambda x: (x + 4) // 5 * 5