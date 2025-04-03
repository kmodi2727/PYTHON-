from abc import ABC

class Vehicle(ABC):
    def Tyre(self):
        pass

class truck(Vehicle):
    def Tyre(self):
        print("TRUCK HAVE 6 TYRES!!")
        print("BLACK")
class car(Vehicle):
    def Tyre(self):
        print("CAR HAVE 4 TYRES!!")
        print("GREEN")
class cycle(Vehicle):
    def Tyre(self):
        print("CYLE HAVE 2 TYRES!!")
        print("YELLOW")


obj = truck()
obj.Tyre()
obj1=car()
obj1.Tyre()
obj2=cycle()
obj2.Tyre()

