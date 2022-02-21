with open ("donkey.txt")as f:
    a=f.read()

a=a.replace("donkey", "#$@*&^")

with open ("donkey.txt", 'w')as f:
    f.write(a)