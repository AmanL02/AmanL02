def cool(n):
    if(n==1):
        return 1
    if(n==0):
        return 0
    b=n+cool(n-1)
    return b
a=int(input("Enter a num: "))
print(cool(a))