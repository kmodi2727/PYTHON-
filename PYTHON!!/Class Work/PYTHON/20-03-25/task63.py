class A:
    def fun1(self):
        print("hello")

class B:
    def fun1(self):
        super().fun1()
        print("WELCOME")

class C(B,A):
    def fun1(self):
        super().fun1()
        print("WOW!!")


obj = C()
obj.fun1()
