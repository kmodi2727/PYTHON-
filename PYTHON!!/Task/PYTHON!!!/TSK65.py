import random
ac_no = random.randint(100000001,999999999)

class Bank:
    def register1(self):
        name=input("ENTER YOUR NAME : ")
        age=int(input("ENTER YOUR AGE : "))
        balance = 5000
        print("YOUR GENERATED ACCOUNT NUMBER IS: ",ac_no)
        password = int(input("ENTER YOUR PASSWORD : "))
        print("YOUR PASSWORD AND ACCOUNT NUMBER IS GENERATED!!")
        print("REGISTRATION COMPLETED!!")

        self.name=name
        self.password=password
        self.balance=balance

    def deposit(self):
        amount=int(input("PLEASE ENTER YOUR AMOUNT YOU WANNA DEPOSIT : "))
        print("DEPOSITED AMOUNT IS ",amount)
        self.balance+=amount

    def withdraw(self):
        amount=int(input("PLEASE ENTER YOUR AMOUNT YOU WANNA WITHDRAW : "))
        print("WITHDRAWL AMOUNT IS",amount)
        self.balance-=amount
    
    def check_bal(self):
        print("YOUR BALANCE IS : ",self.balance)

menu = """
    PRESS 1 FOR REGISTER!!
    PRESS 2 FOR EXIT!!
"""
print(menu)
choice=int(input("PLEASE ENTER YOUR CHOICE : "))
obj=Bank()
if choice==1:
    obj.register1()
    while True:
        menu1="""
        PRESS 1 FOR DEPOSIT 
        PRESS 2 FOR WITHDRAW
        PRESS 3 FOR CHECK BALANCE
        PRESS 4 FOR EXIT 
            """
        print(menu1)
        choice1 = int(input("ENTER YOUR CHOICE : "))

        if choice1==1:
            obj.deposit()
        elif choice1==2:
            obj.withdraw()
        elif choice1==3:
            obj.check_bal()
        elif choice1==4:
            print("THANK YOU!!")
            break
        else:
            print("INVALID CHOICE!!")
            break
else:
    print("THANK YOU!!")