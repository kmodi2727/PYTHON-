class A:
    def fun1(self):
        print("hello")

class B(A):
    def fun1(self):
        super().fun1()
        print("WELCOME")

class C():
    def fun1(self):
        super().fun1()
        print("WOW!!")

class D(C,B):
    def fun1(self):
        super().fun1()
        print("heyy")

obj = D()
obj.fun1()
