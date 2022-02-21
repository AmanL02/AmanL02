with open ("log.txt", 'r')as f:
    a=f.read()

if 'python' in a:
    print("Python is available\n")

else:
    print("absent\n")