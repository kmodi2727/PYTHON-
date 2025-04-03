from abc import ABC

class Vehicle(ABC):
    def tyre(self):
        pass

class truck(Vehicle):
    def tyre(self):
        print("TRUCK HAVE 6 TYRES!!")
        print("BLACK COLOUR")

class car(Vehicle):
    def tyre(self):
        print("CAR HAVE 4 TYRES")
        print("BLUE COLOUR")

class cycle(Vehicle):
    def tyre(self):
        print("CYCLE HAVE 2 TYRES")
        print("PINK COLOUR")

obj = truck()
obj.tyre()
obj1 = car()
obj1.tyre()
obj2 = cycle()
obj2.tyre()
