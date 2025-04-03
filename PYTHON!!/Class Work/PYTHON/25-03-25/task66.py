#abstraction = data hiding 

from abc import ABC

class Employer(ABC):                 #abstract class 
    def salary(self):
        pass

class Karan(Employer):
    def salary(self):
        print("KARAN GOT 3K!!")

class Aaryan(Employer):
    def salary(self):
        print("AARYAN GOT 2K!!")

obj = Karan()
obj.salary()
obj1=Aaryan()
obj1.salary()
