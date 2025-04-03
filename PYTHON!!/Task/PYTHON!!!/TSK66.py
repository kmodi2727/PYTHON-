from abc import ABC 

class Employer(ABC):
    def salary(self):
        pass

class Vikram(Employer):
    def salary(self):
        print("VIKRAM GOT 200K!!")

class Sachin(Employer):
    def salary(self):
        print("SACHIN GOT 150K!!")

class Raju(Employer):
    def salary(self):
        print("RAJU GOT 100K!!")


obj=Vikram()
obj.salary()
obj1=Sachin()
obj1.salary()
obj2=Raju()
obj2.salary()

