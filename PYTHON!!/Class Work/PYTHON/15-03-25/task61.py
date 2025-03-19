class A():
    def gun1(self):
        print("this is one!!")

class B(A):
    def gun2(self):
        print("this is second!!")

class C():
    def gun3(self):
        print("this is third!!")

class D(B,C):
    def gun4(self):
        print("this is fourth!!")

obj=D()
obj.gun1()
obj.gun2()
obj.gun3()
obj.gun4()
