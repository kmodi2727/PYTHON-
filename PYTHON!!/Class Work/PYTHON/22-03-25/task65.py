import random 
ac_no = random.randint(10000000001,99999999999)

class Bank:
    def register1(self):
        name=input("ENTER NAME : ")
        age = int(input("ENTER AGE : "))
        balance = 5000
        print("YOU GENERATED ACCOUNT IS : ",ac_no)
        password = int(input("ENTER PASSWORD : "))

        print("YOUR PASSWORD AND ACCOUNT NUMBER GENERATED!!")

        print("REGISTER SUCCESSFULLY!!")

        self.name=name
        self.password=password
        self.balance=balance

    def deposit(self):
        amount = int(input("ENTER DEPOSIT AMOUNT : "))
        print("DEPOSIT AMOUNT IS : ",amount)
        self.balance+=amount

    def withdraw(self):
        amount1=int(input("ENTER WITHDRWAL AMOUNT : "))
        print("DEPOSIT AMOUNT IS : ",amount1)

        self.balance-=amount1

    def check_bal(self):
        print("BALANCE IS : ",self.balance)


menu = """
press 1 for register 
press 2 for exit 
"""
print(menu)
choice = int(input("ENTER CHOICE : "))
obj = Bank()
if choice ==1:
    obj.register1()

    while True:
        menu1="""
        press 1 for Deposit 
        press 2 for Withdrawl
        press 3 for check balance 
        press 4 for exit 
        """
        print(menu1)
        choice1 = int(input("Enter choice : "))

        if choice1 ==1:
            obj.deposit()
        elif choice1==2:
            obj.withdraw()
        elif choice1==3:
            obj.check_bal()
        elif choice1==4:
            print("THANK YOU!!!")
            break
        else:
            print("INVALID CHOICE!!")
            break
else:
    print("THANK YOU!!")

