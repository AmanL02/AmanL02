with open ("this.txt") as f:
    a=f.read()

with open ("that.txt", 'w')as f:
    f.write(str(a))