# operator overloading 

class user :
    def __init__(self,a,b):
        self.a=a
        self.b=b
        print("THIS IS INIT!!")

    def __str__(self):
        return f"{self.a},{self.b}"
    
    def __add__(self,obj):
        print("ADD CALLED!!")
        x = self.a + obj.a 
        y = self.b + obj.b
        return x,y
    
obj = user(20,30)
print(obj)

obj1 = user(30,40)
print(obj1)

print("ADDITION OF YOUR NUMBER IS : ",obj+obj1)

