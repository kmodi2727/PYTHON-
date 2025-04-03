#polymorphism 
#poly->many
#morphism->forms

#many forms 
#1)method overloading 
#2)method overriding 


class A:
    def fun1(self):
        print("hello")

class B(A):
    def fun1(self):
        super().fun1()
        print("WELCOME")

obj = B()
obj.fun1()
