from this import d


class Complex:
    a = 5
    b = 7
    c = 9
    d = 11

    def addComplex(self):
        print(f"{self.a + self.c} + {self.b + self.d}i")

    def multComplex(self):
        print(f"{(self.a * self.c) - (self.b*self.d)} +{(self.a*self.d)+(self.b*self.c)}i")

c=Complex()
c.addComplex()
c.multComplex()