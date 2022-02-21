with open ("donkey.txt")as f:
    a=f.read()

b=["donkey", "fuck", "pussy"]
for word in b:
    a=a.replace(word, "#$@*&^")

with open ("donkey.txt", 'w')as f:
    f.write(a)