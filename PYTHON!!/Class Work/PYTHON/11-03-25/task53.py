class Myclass():
    def fun1(self):
        print("this is fun1")
    
    def fun2(self):
        print("this is fun2")

    def fun3(self,n):
        fac=1
        for i in range (1,n+1):
            fac*=i
        return fac
        
    def fun4(self):
       l=[1,2,3,1,2]
       l1=[]
       for i in l:
           if i not in l1:
               l1.append(i)
       print(l1)




obj = Myclass()
obj.fun1()
obj.fun2()
print(obj.fun3(5))
obj.fun4()