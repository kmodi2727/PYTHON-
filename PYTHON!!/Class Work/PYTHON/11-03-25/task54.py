class A:
    def fun1(self):
        print("THIS IS PARENT CLASS!!")

class B(A):
    def fun2(self):
        print("THIS IS CHILD CLASS!!")

obj = B()
obj.fun1()
obj.fun2()
