class Train:
    def __init__(aks, name, fare, seats):
        aks.name = name
        aks.fare = fare
        aks.seats = seats

    def getStatus(aks):
        print("************")
        print(f"The name of the train is {aks.name}")
        print(f"The seats available in the train are {aks.seats}")
        print("************")

    def fareInfo(aks):
        print(f"The price of the ticket is: Rs {aks.fare}")

    def bookTicket(aks):
        if(aks.seats>0):
            print(f"Your ticket has been booked! Your seat number is {aks.seats}")
            aks.seats = aks.seats - 1
        else:
            print("Sorry this train is full! Kindly try in tatkal")

    def cancelTicket(aks, seatNo):
        pass

intercity = Train("Intercity Express: 14015", 90, 2)
intercity.getStatus() 
intercity.bookTicket()
intercity.bookTicket()
intercity.bookTicket()
intercity.getStatus()