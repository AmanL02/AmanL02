from cmath import sqrt


class Calculater:
    def __init__(self, n) :
        self.n=n
        self.b=n*n
        self.c=n*n*n

    def getSquare(self):
        print(f"Square of {self.n} is {self.b}")

    def getCube(self):
        print(f"Cube of {self.n} is {self.c}")

    def getRoot(self):
        print(f"Root of {self.n} is {self.n **0.5}")

n=int(input("Enter Your Number: "))
n=Calculater(n)
n.getSquare()
n.getCube()
n.getRoot()
