import os

with open ("sample2.txt") as f:
    a=f.read()

with open ("rename.txt", 'w') as f:
    f.write(a)

os.remove("sample2.txt")