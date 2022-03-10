from this import d


class Animals :
    pass

class Pets(Animals):
    pass

class Dog(Pets):
    bark = "bhu bhu"

d = Dog()
print(d.bark)
