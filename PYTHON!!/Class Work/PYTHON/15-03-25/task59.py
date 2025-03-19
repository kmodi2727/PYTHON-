class A:
    def fun1(self):
        print("this is function 1")

class B:
    def fun2(self):
        print("this is function 2")

class C(A,B):
    def fun3(self):
        print("this is function 3")

obj = C()
obj.fun1()
obj.fun2()
obj.fun3()
