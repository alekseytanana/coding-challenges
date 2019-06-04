import simplecrypt

with open("encrypted.bin", "rb") as inp:
    encrypted = inp.read()

with open("passwords.txt", "rb") as passw:
    passwords = passw.readlines()

for p in passwords:
    p = p.decode('ascii').strip()
    print(p)
    try:
        print(simplecrypt.decrypt(p, encrypted))
    except simplecrypt.DecryptionException:
        print("Incorrect password")
