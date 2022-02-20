a=int(input("Enter 1st num: "))
b=int(input("Enter 2nd num: "))
c=int(input("Enter 3rd num: "))
d=int(input("Enter 4rth num: "))
if (a>b and a>c and a>d):
    print("1st num is largest")
elif(b>a and b>c and b>d):
    print("2nd num is largest")
elif(c>a and c>b and c>d):
    print("3rd num is largest")
else:
    print("D is largest")