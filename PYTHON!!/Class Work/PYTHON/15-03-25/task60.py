class A():
    def kar1(self):
        print("this is kar 1")

class B(A):
    def kar2(self):
        print("this is kar 2")

class C(B):
    def kar3(self):
        print("this is kar 3")

obj=B()
obj.kar1()
obj.kar2()
obj=C()
obj.kar1()
obj.kar3()
