a= int(input("Enter numerator: "))
b= int(input("Enter denominator: "))
try:
    print(a/b)
except ZeroDivisionError:
    print("Infinity")