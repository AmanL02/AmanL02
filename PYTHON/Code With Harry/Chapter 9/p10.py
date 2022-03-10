with open ("wipe.txt") as f:
    a=f.read()

a=a.replace(a, "")

with open ("wipe.txt", 'w') as f:
    f.write(a)