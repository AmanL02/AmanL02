def game(y="y"):
    y = input("Enter the new high score: ")
    return y


with open("high score.txt",'r')as f:
    n=f.read()
    print(n)


a=game()
if(a>n):
    with open("high score.txt",'w')as f:
        f.write(a)

