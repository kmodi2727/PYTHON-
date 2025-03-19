class A:
    def kar1(self):
        print("this is 1")

class B(A):
    def kar2(self):
        print("this is 2")

class C(B):
    def kar3(self):
        print("this is 3")

obj = C()
obj.kar1()
obj.kar2()
obj.kar3()