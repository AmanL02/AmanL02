a=int(input("Enter marks in subject 1: "))
b=int(input("Enter marks in subject 2: "))
c=int(input("Enter marks in subject 3: "))
if(a<33 or b<33 or c<33):
    print("Sorry to say! You are failed\n")
elif((a+b+c)/3 <40):
    print("Still Failed xd")
else :
    print("Congrats u r passed")