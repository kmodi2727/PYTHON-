class A:
    def gun1(self):
        print("HELLO!!!")

class B(A):
    def gun1(self):
        super().gun1()
        print("HEYYY!!!")

class C():
    def gun1(self):
        super().gun1()
        print("WELCOME!!!")

class D(C,B):
    def gun1(self):
        super().gun1()
        print("GOOO!!!")

obj = D()
obj.gun1()
