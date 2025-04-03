#operator overloading 

class user:
    def __init__(self,a,b):
        self.a=a
        self.b=b
        print("This is init")

    def ___str___(self):
        return f"{self.a},{self.b}"
    
    def ___add___(self,obj):
        print("ADD CALLED")
        x = self.a + obj.a
        y = self.b + obj.b 
        return x,y
    

obj = user(10,20)
print(obj)

obj1 = user(30,40)
print(obj1)

print("ADDITION : ",obj+obj1)

