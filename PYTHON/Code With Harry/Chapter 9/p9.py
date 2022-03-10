with open ("this.txt") as f:
    a=f.read()

with open ("that.txt") as f:
    b=f.read()

if(a==b):
    print("Both Files are same\n")
else:
    print("Different\n")