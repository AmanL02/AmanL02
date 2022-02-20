n=int(input("Enter Your number: "))
# for n in range (1,n+1):
if(n==2 or n==3):
    print("It s a prime num")
elif(n%2==1 and n%3!=0):
    print("It is a prime num")
else :
    print("It is not a prime num")