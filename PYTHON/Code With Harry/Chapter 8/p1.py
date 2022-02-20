def founder(x,y,z):
    if(x>y and x>z):
        return x
    if(y>x and y>z):
        return y
    if(z>x and z>y):
        return z
a=int(input("Enter ur num: "))
b=int(input("Enter ur num: "))
c=int(input("Enter ur num: "))
print(founder(a,b,c))
