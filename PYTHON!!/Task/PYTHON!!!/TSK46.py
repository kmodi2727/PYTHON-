import random 
original=random.randint(1,50)
print("*"*10,"WELCOME TO THE GAME","*"*10)

while True:
    choice=int(input("ENTER A NUMBER : "))

    if choice>50:
        print("INVALID CHOICE!!!:)")
        break
    elif choice==original:
        print("YOU WIN BRO!!!")
        break
    elif choice>original:
        print(choice,"YOUR NUMBER IS BIGGER!!!")
    else:
        print(choice,"YOUR NUMBER IS SMALLER!!!")
        